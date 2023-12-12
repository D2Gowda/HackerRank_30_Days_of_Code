#include <stdio.h>

void getModifiedString(char *s) {
    char oddChars[1000];
    char evenChars[1000];

    int oddIndex = 0;
    int evenIndex = 0;

    for (int j = 0; s[j] != '\0'; j++) {
        if (j % 2 == 0) {
            evenChars[evenIndex++] = s[j];
        } else {
            oddChars[oddIndex++] = s[j];
        }
    }

    evenChars[evenIndex] = '\0';
    oddChars[oddIndex] = '\0';

    printf("%s %s\n", evenChars, oddChars);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        char S[1000];
        scanf("%s", S);
        getModifiedString(S);
    }

    return 0;
}
