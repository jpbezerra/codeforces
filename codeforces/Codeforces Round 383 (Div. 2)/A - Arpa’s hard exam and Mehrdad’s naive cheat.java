import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int number = in.nextInt();

        in.close();

        if (number != 0) {
            switch ((number % 4) - 1) {
                case 0:
                    System.out.println(8);
                    break;
                case 1:
                    System.out.println(4);
                    break;
                case 2:
                    System.out.println(2);
                    break;
                default:
                    System.out.println(6);
            }
        }

        else {
            System.out.println(1);
        }
    }
}