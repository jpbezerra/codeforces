import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
 
        int cases = scanner.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
 
        for (int i = 0; i < cases; i++) {
            arr.add(scanner.nextInt());
        }
 
        Collections.sort(arr);
        int total = 0;
 
        for (int i = 1; i < cases - 1; i++) {
            if (arr.get(i) > arr.get(0) && arr.get(i) < arr.get(cases - 1)) {
                total++;
            }
        }
 
        System.out.println(total);
    }
}