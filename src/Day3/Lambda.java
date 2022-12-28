package Day3;

import javax.swing.Timer;

public class Lambda {
    public static int count=0;
    public static void main(String[] args) {
        Timer t = new Timer(1000, event -> System.out.println("beep"));
        t.start();

        for (int i = 0; i < 3; i++) {
            try{
                Thread.sleep(1000);
            }catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        }
    }
}
