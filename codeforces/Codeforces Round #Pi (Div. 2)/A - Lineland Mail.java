import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int cases = scanner.nextInt();
        ArrayList<Integer> result = new ArrayList<>();

        for (int i = 0; i < cases; i++) {
            result.add(scanner.nextInt());
        }

        Collections.sort(result);

        for (int i = 0; i < cases; i++) {
            int minimum = 0;

            if (i == 0) {
                minimum = result.get(i + 1) - result.get(i);
            }

            else if (i == cases - 1) {
                minimum = result.get(i) - result.get(i - 1);
            }

            else {
                minimum = Math.min(Math.abs(result.get(i - 1) - result.get(i)), Math.abs(result.get(i + 1) - result.get(i)));
            }

            int maximum = Math.max(result.get(i) - result.get(0), result.get(result.size() - 1) - result.get(i));

            System.out.printf("%d %d\n", minimum, maximum);
        }
    }
}