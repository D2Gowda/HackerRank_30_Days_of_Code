class Person:
    def __init__(self, initial_age):
        # Add some more code to run some checks on initial_age
        if initial_age > 0:
            self.age = initial_age
        else:
            print("Age is not valid, setting age to 0.")
            self.age = 0

    def am_i_old(self):
        # Write code determining if this person's age is old and print the correct statement
        if self.age < 13:
            print("You are young.")
        elif self.age < 18:
            print("You are a teenager.")
        else:
            print("You are old.")

    def year_passes(self):
        # Increment this person's age
        self.age += 1

def main():
    T = int(input())
    for _ in range(T):
        age = int(input())
        p = Person(age)
        p.am_i_old()

        for _ in range(3):
            p.year_passes()

        p.am_i_old()
        print()

if __name__ == "__main__":
    main()
