#include <stdio.h>
#include <stdlib.h>

int main() {
    char buffer[100];  // Adjust the size based on your needs
    scanf("%s", buffer);

    char *endptr;
    long integer = strtol(buffer, &endptr, 10);

    if (*endptr == '\0') {
        printf("%ld\n", integer);
    } else {
        printf("Bad String\n");
    }

    return 0;
}
