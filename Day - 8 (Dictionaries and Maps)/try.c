#include <stdio.h>
#include <string.h>

int main() {
    // Read input and assemble Phone Book
    int n;
    scanf("%d", &n);
    char phoneBook[1000][20]; // Assuming names and phone numbers are at most 20 characters long
    for (int i = 0; i < n; i++) {
        scanf("%s", phoneBook[i]);
        scanf("%s", phoneBook[i] + strlen(phoneBook[i]) + 1);
    }

    // Process Queries
    char name[20];
    while (scanf("%s", name) == 1) {
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (strcmp(name, phoneBook[i]) == 0) {
                printf("%s=%s\n", name, phoneBook[i] + strlen(phoneBook[i]) + 1);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Not found\n");
        }
    }

    return 0;
}
