import java.util.Scanner;

public class Factorial {

    public static int factorial(int n) {
        return (n == 1) ? 1 : n * factorial(n - 1);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = scanner.nextInt();
        System.out.println(factorial(n));
        scanner.close();
    }
}
