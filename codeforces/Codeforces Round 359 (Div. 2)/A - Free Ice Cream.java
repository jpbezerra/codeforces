import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
 
        int cases = scanner.nextInt();
        long icecreams = scanner.nextInt();
        String signal;
        long number;
        long kids = 0;
 
        for (int i = 0; i < cases; i++) {
            signal = scanner.next();
            number = scanner.nextInt();
 
            if (signal.charAt(0) == '+') {
                icecreams += number;
            }
 
            else {
                if (icecreams >= number) {
                    icecreams -= number;
                }
 
                else {
                    kids++;
                }
            }
        }
 
        System.out.printf("%d %d", icecreams, kids);
    }
}