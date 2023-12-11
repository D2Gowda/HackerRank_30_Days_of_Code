#include <stdio.h>

struct Person {
    int age;
};

void initPerson(struct Person *p, int initialAge) {
    // Add some more code to run some checks on initialAge
    if (initialAge > 0) {
        p->age = initialAge;
    } else {
        printf("Age is not valid, setting age to 0.\n");
        p->age = 0;
    }
}

void amIOld(struct Person *p) {
    // Write code determining if this person's age is old and print the correct statement:
    if (p->age < 13) printf("You are young.\n");
    else if (p->age < 18) printf("You are a teenager.\n");
    else printf("You are old.\n");
}

void yearPasses(struct Person *p) {
    // Increment this person's age.
    p->age++;
}

int main() {
    int T, age;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &age);
        struct Person p;
        initPerson(&p, age);
        amIOld(&p);

        for (int j = 0; j < 3; j++) {
            yearPasses(&p);
        }

        amIOld(&p);
        printf("\n");
    }

    return 0;
}
