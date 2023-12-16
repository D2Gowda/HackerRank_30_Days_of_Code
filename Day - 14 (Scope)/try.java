import java.util.Scanner;

class Difference {
    private int[] elements;
    public int maximumDifference;

    public Difference(int[] a) {
        this.elements = a;
    }

    public void computeDifference() {
        int maximum = 0;

        for (int i = 0; i < elements.length; i++) {
            for (int j = 0; j < elements.length; j++) {
                int absolute = Math.abs(elements[i] - elements[j]);
                if (absolute > maximum) {
                    maximum = absolute;
                }
            }
        }

        maximumDifference = maximum;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = Integer.parseInt(scanner.nextLine());
        int[] a = new int[n];

        String[] elements = scanner.nextLine().split(" ");
        for (int i = 0; i < n; i++) {
            a[i] = Integer.parseInt(elements[i]);
        }

        Difference d = new Difference(a);
        d.computeDifference();

        System.out.println(d.maximumDifference);
    }
}
