package sg.vantagepoint.uncrackable2;

import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.AsyncTask;
import android.os.Debug;
import android.os.SystemClock;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import sg.vantagepoint.util.RootDetection;
import sg.vantagepoint.util.IntegrityCheck;
import sg.vantagepoint.uncrackable2.CodeCheck;

public class MainActivity extends AppCompatActivity {

    private CodeCheck check;
    private native void init();

    private void showDialogAndExit(String title) {
        AlertDialog alertDialog = new AlertDialog.Builder(((Context)this)).create();

        alertDialog.setTitle(title);
        alertDialog.setMessage("This in unacceptable. The app is now going to exit.");

        alertDialog.setButton(alertDialog.BUTTON_NEUTRAL, "OK", new DialogInterface.OnClickListener() {
            public void onClick(DialogInterface dialog, int which) {
                System.exit(0);
            }
        });

        alertDialog.show();
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {

        init();

        /*
        if (RootDetection.checkRoot1()  || RootDetection.checkRoot2() || RootDetection.checkRoot3()) {
            showDialogAndExit("Root detected!");
        }

        if (IntegrityCheck.isDebuggable(this.getApplicationContext())) {
            showDialogAndExit("App is debuggable!");
        }
      */

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
                showDialogAndExit("Debugger detected!");
            }
        }.execute(null, null, null);

        check = new CodeCheck();

        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }


    public void verify(View view) {
        String v2 = ((EditText)this.findViewById(R.id.edit_text)).getText().toString();
        AlertDialog alertDialog = new AlertDialog.Builder(((Context)this)).create();

        if(check.check_code(v2)) {
            alertDialog.setTitle("Success!");
            alertDialog.setMessage("This is the correct secret.");
        }
        else {
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
