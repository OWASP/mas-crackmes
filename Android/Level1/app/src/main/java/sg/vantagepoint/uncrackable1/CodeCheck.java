package sg.vantagepoint.uncrackable1;

import android.util.Base64;
import android.util.Log;
import sg.vantagepoint.util.Crypto;

/**
 * Created by berndt on 3/4/17.
 */
public class CodeCheck {
    private static final String TAG = "CodeCheck";

    public CodeCheck() {
        super();
    }

    public static boolean check_code(String code) {
        boolean v5 = false;
        String v3 = "8d127684cbc37c17616d806cf50473cc";
        byte[] v2 = Base64.decode("5UJiFctbmgbDoLXmpL12mkno8HT4Lv8dlat8FxR2GOc=", 0);

        byte v0[] = {};

        try {
           v0 = Crypto.decrypt(CodeCheck.hexStringToByteArray(v3), v2);
        }
        catch(Exception v1) {
            Log.d("CodeCheck", "AES error:" + v1.getMessage());
        }

        if(code.equals(new String(v0))) {
            v5 = true;
        }

        return v5;
    }

    public static byte[] hexStringToByteArray(String s) {
        int v6 = 16;
        int v2 = s.length();
        byte[] v0 = new byte[v2 / 2];
        int v1;
        for(v1 = 0; v1 < v2; v1 += 2) {
            v0[v1 / 2] = ((byte)((Character.digit(s.charAt(v1), v6) << 4) + Character.digit(s.charAt(
                    v1 + 1), v6)));
        }

        return v0;
    }
}

