import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class PhoneBook {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read input and assemble Phone Book
        int n = scanner.nextInt();
        Map<String, String> phoneBook = new HashMap<>();
        for (int i = 0; i < n; i++) {
            String[] contact = scanner.next().split(" ");
            phoneBook.put(contact[0], contact[1]);
        }

        // Process Queries
        while (scanner.hasNext()) {
            String name = scanner.next();
            if (phoneBook.containsKey(name)) {
                System.out.println(name + "=" + phoneBook.get(name));
            } else {
                System.out.println("Not found");
            }
        }

        scanner.close();
    }
}

