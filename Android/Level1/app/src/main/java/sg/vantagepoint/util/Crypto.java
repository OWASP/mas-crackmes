package sg.vantagepoint.util;

/**
 * Created by berndt on 3/4/17.
 */

import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.spec.SecretKeySpec;

public class Crypto {
    public Crypto() {
        super();
    }

    public static byte[] decrypt(byte[] raw, byte[] encrypted) throws Exception {
        SecretKeySpec v2 = new SecretKeySpec(raw, "AES/ECB/PKCS7Padding");
        Cipher v0 = Cipher.getInstance("AES");
        v0.init(2, ((Key)v2));
        return v0.doFinal(encrypted);
    }

    public static byte[] encrypt(byte[] raw, byte[] clear) throws Exception {
        SecretKeySpec v2 = new SecretKeySpec(raw, "AES/ECB/PKCS7Padding");
        Cipher v0 = Cipher.getInstance("AES");
        v0.init(1, ((Key)v2));
        return v0.doFinal(clear);
    }
}

