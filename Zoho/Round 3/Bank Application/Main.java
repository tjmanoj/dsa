import java.util.Scanner;

public class Main {

    private static final int WAIT_DURATION_MS = 1500;

    public static void clearScreen() {
        for (int i = 0; i < 20; i++) {
            System.out.println();
        }
    }

    public static void waitScreen(){
        try {
            Thread.sleep(WAIT_DURATION_MS);
        } catch (InterruptedException e) {
            System.out.println("Cannot hold the screen");
            e.printStackTrace();
        }
    }

    public static void displayOptions(){
        System.out.println("Reserve Bank Of India");
        System.out.println("Options");
        System.out.println("1. Login");
        System.out.println("2. SignUp");
        System.out.println("3. Exit");
    }

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int choice;

            while (true) {
                displayOptions();
                System.out.print("Enter choice: ");
                choice = sc.nextInt();
                sc.nextLine();

                switch (choice) {
                    case 1:
                        ClientManager.validateClient();
                        waitScreen();
                        clearScreen();
                        break;

                    case 2:
                        Client client = ClientManager.createClient();
                        waitScreen();
                        clearScreen();
                        break;

                    case 3:
                        System.out.print("Thank you!");
                        System.exit(0);

                    default:
                        System.out.println("Invalid choice");
                        waitScreen();
                        clearScreen();
                        break;
                }
            }
        }
    }
}
