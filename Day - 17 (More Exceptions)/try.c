#include <stdio.h>
#include <math.h>

struct Calculator {
    double power(int n, int p) {
        if (n < 0 || p < 0) {
            // You may choose a different way to handle exceptions in C
            fprintf(stderr, "n and p should be non-negative\n");
            // In this case, returning a negative value to indicate an error
            return -1.0;
        }
        return pow((double)n, (double)p);
    }
};

int main() {
    struct Calculator myCalculator;
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; ++i) {
        int n, p;
        scanf("%d %d", &n, &p);

        double ans = myCalculator.power(n, p);
        if (ans < 0) {
            // Handle the error case
            // You may choose to print an error message or take other actions
        } else {
            printf("%.0f\n", ans);
        }
    }

    return 0;
}
