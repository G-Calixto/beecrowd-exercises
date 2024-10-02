import java.util.Locale;
import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        int c1 = sc.nextInt();
        int c2 = sc.nextInt();
        if(c1 == c2){
            System.out.println(c1);
        }else if(c1 > c2){
            System.out.println(c1);
        } else{
            System.out.println(c2);
        }





        sc.close();
    }
}
