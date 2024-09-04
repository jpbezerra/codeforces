import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x = in.nextInt() * in.nextInt();

        Set<String> set = new HashSet<>();

        for (int i = 0; i < x; i++) {
            set.add(in.next());
        }

        in.close();

        if (set.size() > 3) {
            System.out.println("#Color");
        }

        else {
            if (set.contains("C") || set.contains("M") || set.contains("Y")) {
                System.out.println("#Color");
            }

            else {
                System.out.println("#Black&White");
            }
        }
    }
}