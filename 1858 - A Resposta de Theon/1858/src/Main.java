import java.io.IOException;
import java.util.Scanner;
import java.util.Locale;


public class Main {
 
    public static void main(String[] args) throws IOException {
    Locale.setDefault(Locale.US);
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int h, m, o;
    for(int i = 0; i<n; i++){
        h = sc.nextInt();
        m = sc.nextInt();
        o = sc.nextInt();


        String horaFormatada = String.format("%02d", h);
        String minutoFormatado = String.format("%02d", m);

        System.out.print(horaFormatada+":"+minutoFormatado);
        if(o == 1){
            System.out.println(" - A porta abriu!");
        } else {
            System.out.println(" - A porta fechou!");
        }
        
    }
    
    
    
    
    
    sc.close();
    }
 
}