import java.util.ArrayList;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int cases = scanner.nextInt();
        ArrayList<Integer> result = new ArrayList<>();
 
        for (int i = 0; i < cases; i++) {
            result.add(0);
        }
 
        for (int i = 0; i < cases; i++) {
            result.set(scanner.nextInt() - 1, i + 1);
        }
 
        for (int i = 0; i < cases; i++) {
            System.out.printf("%d ", result.get(i));
        }
    }
}