import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String equation = scanner.next();
        ArrayList<Integer> arr = new ArrayList<>();

        int size = equation.length();
        for (int i = 0; i < size; i++) {
            if (equation.charAt(i) != '+') {
                arr.add(equation.charAt(i) - '0');
            }
        }

        Collections.sort(arr);
        System.out.printf("%d", arr.get(0));
        size = arr.size();
        
        for (int i = 1; i < size; i++) {
            System.out.printf("+%d", arr.get(i));
        }
    }
}