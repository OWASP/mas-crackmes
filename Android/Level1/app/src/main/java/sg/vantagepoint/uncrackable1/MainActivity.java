package sg.vantagepoint.uncrackable1;

import android.app.Activity;
import android.os.Bundle;
import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.view.View;
import android.widget.EditText;

import sg.vantagepoint.util.RootDetection;
import sg.vantagepoint.util.IntegrityCheck;

public class MainActivity extends Activity {

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

        if (RootDetection.checkRoot1()  || RootDetection.checkRoot2() || RootDetection.checkRoot3()) {
            showDialogAndExit("Root detected!");
        }

        if (IntegrityCheck.isDebuggable(this.getApplicationContext())) {
            showDialogAndExit("App is debuggable!");
        }

        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }


    public void verify(View view) {
        String v2 = ((EditText)this.findViewById(R.id.edit_text)).getText().toString();
        AlertDialog alertDialog = new AlertDialog.Builder(((Context)this)).create();

        if(CodeCheck.check_code(v2)) {
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
}
