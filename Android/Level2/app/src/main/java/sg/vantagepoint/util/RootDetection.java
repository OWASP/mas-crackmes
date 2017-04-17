package sg.vantagepoint.util;

import java.io.File;

/**
 * Created by berndt on 3/5/17.
 */
public class RootDetection {

    public static boolean checkRoot1(){
        for(String pathDir : System.getenv("PATH").split(":")){
            if(new File(pathDir, "su").exists()) {
                return true;
            }
        }
        return false;
    }

    public static boolean checkRoot2() {
        String buildTags = android.os.Build.TAGS;
        return buildTags != null && buildTags.contains("test-keys");
    }

    public static boolean checkRoot3() {
        String[] paths = { "/system/app/Superuser.apk", "/system/xbin/daemonsu",  "/system/etc/init.d/99SuperSUDaemon", "/system/bin/.ext/.su", "/system/etc/.has_su_daemon", "/system/etc/.installed_su_daemon", "/dev/com.koushikdutta.superuser.daemon/" };

        for (String path : paths) {
            if (new File(path).exists()) return true;
        }
        return false;
    }


}
