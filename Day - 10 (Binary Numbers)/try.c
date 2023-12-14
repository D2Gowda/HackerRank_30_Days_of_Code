#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

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

    printf("%d\n", maximum);

    return 0;
}
