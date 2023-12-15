import java.util.Scanner;

class Person {
    private String firstName;
    private String lastName;
    private int idNumber;

    public Person(String firstName, String lastName, int idNumber) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.idNumber = idNumber;
    }

    public void printPerson() {
        System.out.println("Name: " + lastName + ", " + firstName);
        System.out.println("ID: " + idNumber);
    }
}

class Student extends Person {
    private int[] testScores;

    public Student(String firstName, String lastName, int idNumber, int[] testScores) {
        super(firstName, lastName, idNumber);
        this.testScores = testScores;
    }

    public char calculate() {
        int total = 0;

        for (int testScore : testScores) {
            total += testScore;
        }

        int avg = total / testScores.length;

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
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String firstName = scanner.next();
        String lastName = scanner.next();
        int idNum = scanner.nextInt();
        int numScores = scanner.nextInt();
        int[] scores = new int[numScores];

        for (int i = 0; i < numScores; i++) {
            scores[i] = scanner.nextInt();
        }

        Student s = new Student(firstName, lastName, idNum, scores);
        s.printPerson();
        System.out.println("Grade: " + s.calculate());
    }
}
