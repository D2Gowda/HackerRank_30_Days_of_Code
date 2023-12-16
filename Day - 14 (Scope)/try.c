#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* elements;
    int maximumDifference;
} Difference;

void computeDifference(Difference* d, int n) {
    int maximum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int absolute = abs(d->elements[i] - d->elements[j]);
            if (absolute > maximum) {
                maximum = absolute;
            }
        }
    }

    d->maximumDifference = maximum;
}

int main() {
    int n;
    scanf("%d", &n);

    Difference d;
    d.elements = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &d.elements[i]);
    }

    computeDifference(&d, n);

    printf("%d\n", d.maximumDifference);

    // Don't forget to free the allocated memory
    free(d.elements);

    return 0;
}
