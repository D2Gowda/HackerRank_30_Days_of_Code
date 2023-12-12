import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        scanner.nextLine(); // Consume the newline after reading T

        for (int i = 0; i < T; i++) {
            String S = scanner.nextLine();
            System.out.println(getModifiedString(S));
        }
    }

    private static String getModifiedString(String s) {
        StringBuilder oddChars = new StringBuilder();
        StringBuilder evenChars = new StringBuilder();

        for (int j = 0; j < s.length(); j++) {
            if (j % 2 == 0) {
                evenChars.append(s.charAt(j));
            } else {
                oddChars.append(s.charAt(j));
            }
        }

        return evenChars.toString() + " " + oddChars.toString();
    }
}
