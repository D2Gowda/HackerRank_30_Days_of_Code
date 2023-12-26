import java.util.Scanner;

class Calculator {
    double power(int n, int p) throws Exception {
        if (n < 0 || p < 0) {
            throw new Exception("n and p should be non-negative");
        }
        return Math.pow(n, p);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Calculator myCalculator = new Calculator();
        int T = scanner.nextInt();

        for (int i = 0; i < T; ++i) {
            int n = scanner.nextInt();
            int p = scanner.nextInt();

            try {
                double ans = myCalculator.power(n, p);
                System.out.println((int) ans); // Print as an integer
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }
    }
}
