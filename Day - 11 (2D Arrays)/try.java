import java.util.Scanner;

public class HourglassSum {

    public static void main(String[] args) {
        int[][] arr = new int[6][6];
        Scanner scanner = new Scanner(System.in);

        // Input
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                arr[i][j] = scanner.nextInt();
            }
        }

        int maxSum = 0;
        int tempSum;

        // Calculate hourglass sum
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                tempSum = 0;

                // top row
                tempSum += arr[i][j];
                tempSum += arr[i][j + 1];
                tempSum += arr[i][j + 2];

                // middle
                tempSum += arr[i + 1][j + 1];

                // bottom row
                tempSum += arr[i + 2][j];
                tempSum += arr[i + 2][j + 1];
                tempSum += arr[i + 2][j + 2];

                // if first hourglass, set as max
                if (tempSum > maxSum || (i == 0 && j == 0)) {
                    maxSum = tempSum;
                }
            }
        }

        // Output
        System.out.println(maxSum);
    }
}
