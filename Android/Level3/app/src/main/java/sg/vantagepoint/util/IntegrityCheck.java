package sg.vantagepoint.util;

import android.content.Context;
import android.content.pm.ApplicationInfo;

/**
 * Created by berndt on 3/5/17.
 */
public class IntegrityCheck {

    public static boolean isDebuggable(Context context){

        return ((context.getApplicationContext().getApplicationInfo().flags & ApplicationInfo.FLAG_DEBUGGABLE) != 0);

    }

}

