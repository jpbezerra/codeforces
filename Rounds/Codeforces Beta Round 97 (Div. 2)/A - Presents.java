import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int cases = scanner.nextInt();
        int[] result = new int[cases];

        for (int i = 0; i < cases; i++) {
            result[scanner.nextInt() - 1] = i + 1;
        }

        for (int i = 0; i < cases; i++) {
            System.out.printf("%d ", result[i]);
        }
    }
}