import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;
 
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int side = in.nextInt();
        Character[][] letters = new Character[side][side];
        Set<Character> set = new HashSet<>();
 
        for (int i = 0; i < side; i++) {
            String line = in.next();
            for (int j = 0; j < side; j++) {
                letters[i][j] = line.charAt(j);
                set.add(line.charAt(j));
            }
        }
 
        in.close();
 
        if (set.size() == 2 && diagonal(letters, side) && reverseDiagonal(letters, side) && reviewLetters(letters, side)) {
            System.out.println("YES");
        }
 
        else {
            System.out.println("NO");
        }
    }
 
    private static boolean diagonal(Character[][] letters, int side) {
        char ref = letters[0][0];
        for (int i = 1; i < side; i++) {
            if (letters[i][i] != ref) {
                return false;
            }
        }
 
        return true;
    }
 
    private static boolean reverseDiagonal(Character[][] letters, int side) {
        char ref = letters[0][side - 1];
        for (int i = side - 1; i > -1; i--) {
            if (letters[i][side - i - 1] != ref) {
                return false;
            }
        }
 
        return true;
    }
 
    private static boolean reviewLetters(Character[][] letters, int side) {
        char ref = letters[0][0];
 
        for (int i = 0; i < side; i++) {
            int count = 0;
 
            for (int j = 0; j < side; j++) {
                if (letters[i][j] == ref) {
                    count++;
 
                    if ((count > 2 && i != ((side - 1) / 2)) || (count > 1 && i == ((side - 1) / 2))) {
                        return false;
                    }
                }
            }
        }
 
        return true;
    }
}