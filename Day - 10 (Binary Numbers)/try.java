import java.util.Scanner;

public class MaxConsecutiveOnes {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();

        int result = 0;
        int maximum = 0;

        while (num > 0) {
            if (num % 2 == 1) {
                result++;
                if (result > maximum) {
                    maximum = result;
                }
            } else {
                result = 0;
            }

            num /= 2;
        }

        System.out.println(maximum);
    }
}
