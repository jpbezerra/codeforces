import java.util.HashSet;
import java.util.Set;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int cases = scanner.nextInt();
        String temp = scanner.next().toLowerCase();

        Set<Character> mySet = new HashSet<>();

        for (int i = 0; i < cases; i++) {
            mySet.add(temp.charAt(i));
        }

        if (mySet.size() == 26) {
            System.out.println("YES");
        }

        else {
            System.out.println("NO");
        }
    }
}