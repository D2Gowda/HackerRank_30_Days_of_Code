#include <stdio.h>

struct Person {
    char firstName[100];
    char lastName[100];
    int idNumber;
};

struct Student {
    struct Person person;
    int testScores[10];
};

void printPerson(struct Person p) {
    printf("Name: %s, %s\n", p.lastName, p.firstName);
    printf("ID: %d\n", p.idNumber);
}

char calculate(struct Student s) {
    int total = 0;
    int numScores = sizeof(s.testScores) / sizeof(s.testScores[0]);

    for (int i = 0; i < numScores; ++i) {
        total += s.testScores[i];
    }

    int avg = total / numScores;

    if (90 <= avg && avg <= 100) {
        return 'O';
    }
    if (80 <= avg && avg < 90) {
        return 'E';
    }
    if (70 <= avg && avg < 80) {
        return 'A';
    }
    if (55 <= avg && avg < 70) {
        return 'P';
    }
    if (40 <= avg && avg < 55) {
        return 'D';
    }
    return 'T';
}

int main() {
    struct Student s;

    scanf("%s %s %d", s.person.firstName, s.person.lastName, &s.person.idNumber);

    int numScores;
    scanf("%d", &numScores);

    for (int i = 0; i < numScores; ++i) {
        scanf("%d", &s.testScores[i]);
    }

    printPerson(s.person);
    printf("Grade: %c\n", calculate(s));

    return 0;
}
