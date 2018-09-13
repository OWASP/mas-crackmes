package sg.vantagepoint.uncrackable3;

import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.AsyncTask;
import android.os.Debug;
import android.os.SystemClock;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.EditText;

import java.io.IOException;
import java.util.HashMap;
import java.util.Map;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;

import sg.vantagepoint.util.RootDetection;
import sg.vantagepoint.util.IntegrityCheck;

public class MainActivity extends AppCompatActivity {

    private static final String TAG = "UnCrackable3";
    private static final String xorkey = "pizzapizzapizzapizzapizz";
    private CodeCheck check;

    private native void init(byte[] xk);

    private native long baz();

    Map<String, Long> crc;
    static int tampered = 0;

    private void showDialog(String title) {
        AlertDialog alertDialog = new AlertDialog.Builder(((Context) this)).create();

        alertDialog.setTitle(title);
        alertDialog.setMessage("This is unacceptable. The app is now going to exit.");

        alertDialog.setButton(alertDialog.BUTTON_NEUTRAL, "OK", new DialogInterface.OnClickListener() {
            public void onClick(DialogInterface dialog, int which) {
                System.exit(0);
            }
        });

        alertDialog.setCancelable(false);
        alertDialog.show();
    }

    private void verifyLibs() {

        crc = new HashMap<String, Long>();
        //mips, mips64 and armeabi are no longer supported with the new buildtools
//        crc.put("armeabi", Long.parseLong(getResources().getString(R.string.armeabi)));
//        crc.put("mips", Long.parseLong(getResources().getString(R.string.mips)));
        crc.put("armeabi-v7a", Long.parseLong(getResources().getString(R.string.armeabi_v7a)));
        crc.put("arm64-v8a", Long.parseLong(getResources().getString(R.string.arm64_v8a)));
//        crc.put("mips64", Long.parseLong(getResources().getString(R.string.mips64)));
        crc.put("x86", Long.parseLong(getResources().getString(R.string.x86)));
        crc.put("x86_64", Long.parseLong(getResources().getString(R.string.x86_64)));

        try {
            ZipFile zf = new ZipFile(getPackageCodePath());

            for (Map.Entry<String, Long> entry : crc.entrySet()) {

                String filename = "lib/" + entry.getKey() + "/libfoo.so";

                ZipEntry ze = zf.getEntry(filename);

                Log.v(TAG, "CRC[" + filename + "] = " + ze.getCrc());

                if (ze.getCrc() != entry.getValue()) {
                    tampered = 31337;
                    Log.v(TAG, filename + ": Invalid checksum = " + ze.getCrc() + ", supposed to be " + entry.getValue());

                }

            }

            String filename = "classes.dex";
            ZipEntry ze = zf.getEntry(filename);

            Log.v(TAG, "CRC[" + filename + "] = " + ze.getCrc());

            if (ze.getCrc() != baz()) {
                tampered = 31337;
                Log.v(TAG, filename + ": crc = " + ze.getCrc() + ", supposed to be " + baz());

            }

        } catch (IOException e) {
            Log.v(TAG, "Exception");
            System.exit(0);
        }
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {

        verifyLibs();

        init(xorkey.getBytes());

        // Debugger detection
        new AsyncTask<Void, String, String>() {

            @Override
            protected String doInBackground(Void... params) {
                while (!Debug.isDebuggerConnected()) {
                    SystemClock.sleep(100);
                }
                return null;
            }

            @Override
            protected void onPostExecute(String msg) {
                showDialog("Debugger detected!");
                System.exit(0);
            }
        }.execute(null, null, null);

        if (RootDetection.checkRoot1() || RootDetection.checkRoot2() || RootDetection.checkRoot3() || IntegrityCheck.isDebuggable(this.getApplicationContext()) || tampered != 0) {
            showDialog("Rooting or tampering detected.");
        }

        check = new CodeCheck();

        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }


    public void verify(View view) {
        String v2 = ((EditText) this.findViewById(R.id.edit_text)).getText().toString();
        AlertDialog alertDialog = new AlertDialog.Builder(((Context) this)).create();

        if (check.check_code(v2)) {
            alertDialog.setTitle("Success!");
            alertDialog.setMessage("This is the correct secret.");
        } else {
            alertDialog.setTitle("Nope...");
            alertDialog.setMessage("That\'s not it. Try again.");
        }

        alertDialog.setButton(alertDialog.BUTTON_NEUTRAL, "OK", new DialogInterface.OnClickListener() {
            public void onClick(DialogInterface dialog, int which) {
                dialog.dismiss();
            }
        });

        alertDialog.show();
    }


    static {
        System.loadLibrary("foo");

    }

}
