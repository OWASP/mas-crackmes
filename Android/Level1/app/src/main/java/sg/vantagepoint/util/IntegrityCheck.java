package sg.vantagepoint.util;

import android.content.pm.ApplicationInfo;
import 	android.content.Context;

/**
 * Created by berndt on 3/5/17.
 */
public class IntegrityCheck {

    public static boolean isDebuggable(Context context){

        return ((context.getApplicationContext().getApplicationInfo().flags & ApplicationInfo.FLAG_DEBUGGABLE) != 0);

    }

}
