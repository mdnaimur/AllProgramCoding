import java.io.File;
import java.io.IOException;

public class FileExample {

    public static void main(String[] args) {
        File file = new File("hello.txt");
        if (file.exists()) {
            System.out.println("File exists");
             String workingDir = System.getProperty("user.dir");
        System.out.println(workingDir);
        } else {
            System.out.println("File does not exist,lets create one");
            try {
                file.createNewFile();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}
