package sg.vantagepoint.uncrackable3;

/**
 * Created by berndt on 3/4/17.
 */
public class CodeCheck {
    private static final String TAG = "CodeCheck";

    private native boolean bar(byte[] in);

    public CodeCheck() {
        super();
    }

    public boolean check_code(String code) {

        return bar(code.getBytes());

    }


}

