#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int new_i;
    double new_d;
    char new_s[100];  // Assuming a maximum string length of 100 characters

    scanf("%d", &new_i);
    scanf("%lf", &new_d);
    scanf(" %[^\n]s", new_s);  // %[^\n]s to read a line with spaces

    int sum_i = i + new_i;
    double sum_d = d + new_d;
    char sum_s[200];  // Adjust the size based on your needs
    sprintf(sum_s, "%s%s", s, new_s);

    printf("%d\n", sum_i);
    printf("%.1lf\n", sum_d);
    printf("%s\n", sum_s);

    return 0;
}
