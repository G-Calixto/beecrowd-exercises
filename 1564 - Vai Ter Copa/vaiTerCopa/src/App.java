import java.util.Locale;
import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        int n = -1;
        while (sc.hasNextInt()){
            n = sc.nextInt();
            if(n == 0){
                System.out.println("vai ter copa!");
            } else {
                System.out.println("vai ter duas!");
            }
            
        }




        sc.close();
    }
}
