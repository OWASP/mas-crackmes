package re.pwnme;

import android.content.pm.ActivityInfo;
import android.graphics.Color;
import android.os.Bundle;

import androidx.appcompat.app.AppCompatActivity;
import android.widget.Button;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;

import java.lang.NullPointerException;

import com.scottyab.rootbeer.RootBeer;


public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    private String pincode;
    private String amount;
    private byte rt;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setRequestedOrientation(ActivityInfo.SCREEN_ORIENTATION_PORTRAIT);
        setContentView(R.layout.activity_main);

        rt = (byte) 0xf0;
        RootBeer rb = new RootBeer(getApplicationContext());
        if (rb.isRooted() || rb.canLoadNativeLibrary() && rb.checkForRootNative()) {
            int a = 1337 / 0;
            rt |= 0x0f;
        }
        generateR2coin();
    }

    private void generateR2coin() {
        final Button pay = (Button) findViewById(R.id.pay);
        pay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (pay != null) {
                    TextView r2coin_token = (TextView) findViewById(R.id.r2coin_token);
                    if (filledInputData()) {
                        try {
                            if (pincode.length() != 4) {
                                Toast.makeText(getApplicationContext(),
                                        "PIN code must be 4 digits long...",
                                        Toast.LENGTH_SHORT).show();
                                return;
                            }
                            pincode = String.format("%08d", Integer.parseInt(pincode));
                            if (amount.length() <= 8) {
                                amount = String.format("%08d", Integer.parseInt(amount));
                            } else {
                                Toast.makeText(getApplicationContext(),
                                        "Enormous amount to tokenize r2coins.\n" +
                                                "Radare2 is a non-profit organization :)",
                                        Toast.LENGTH_SHORT).show();
                                return;
                            }
                        } catch (Exception e) {
                            Toast.makeText(getApplicationContext(),
                                    "Enter PIN code/amount as numeric...",
                                    Toast.LENGTH_SHORT).show();
                            return;
                        }

                        byte[] inBuff = (pincode + amount).getBytes();


                        RootBeer rb = new RootBeer(getApplicationContext());
                        if (rb.isRooted() ||
                                rb.canLoadNativeLibrary() && rb.checkForRootNative()) {
                            rt |= 0x0f;
                            NullPointerException np = new NullPointerException();
                            np.notify();
                        }

                        Toast.makeText(getApplicationContext(),
                                "Tokenizing your r2coin...",
                                Toast.LENGTH_SHORT).show();

                        //            wbaes_ecb_128_encrypt
                        byte[] out = gXftm3iswpkVgBNDUp(inBuff, rt);

                        byte ret = out[0];
                        if (ret == 0x51)
                            r2coin_token.setTextColor(Color.RED);
                        else
                            r2coin_token.setTextColor(Color.parseColor("#10b010"));

                        r2coin_token.setText("r2c-" + byteArrayToHex(out, 1));

                    } else {
                        String empty = String.format("%032d", 0);
                        r2coin_token.setTextColor(Color.RED);
                        r2coin_token.setText("r2c-" + empty);
                    }
                }
            }
        });

    }

    private boolean filledInputData() {
        TextView tv_pincode = findViewById(R.id.pincode);
        TextView tv_amount = findViewById(R.id.amount);
        pincode = tv_pincode.getText().toString();
        amount = tv_amount.getText().toString();

        if (pincode.equals("") || amount.equals("")) {
            Toast.makeText(getApplicationContext(),
                    "Enter PIN code/amount...", Toast.LENGTH_SHORT).show();
            return false;
        }
        return true;
    }

    public static String byteArrayToHex(byte[] a, int offset) {
        StringBuilder sb = new StringBuilder(a.length * 2);
        for (int i = offset; i < a.length; i++)
            sb.append(String.format("%02x", a[i]));
        return sb.toString();
    }

    /**
     * Perform an AES 128 encryption via Whitebox in native
     */
    public native byte[] gXftm3iswpkVgBNDUp(byte[] inBuff, byte rt); // wbaes_ecb_128_encrypt
}
