import java.util.Scanner;

public class ClientDashboard {

    public static void displayOptions(){
        System.out.println("Options");
        System.out.println("1. Create Account");
        System.out.println("2. Withdraw");
        System.out.println("3. Deposit");
        System.out.println("4. Transfer amount");
        System.out.println("5. Account Details");
        System.out.println("6. View Balance");
        System.out.println("7. Logout");
    }

    public static void dashBoardManager(Client client){
        Scanner sc = new Scanner(System.in);


        int choice;

        while(true){
            displayOptions();
            System.out.print("Enter choice: ");
            choice = sc.nextInt();
            sc.nextLine();

            switch (choice){
                case 1:
                    AccountManager.createAccount(client);
                    Main.waitScreen();
                    Main.clearScreen();
                    break;


                case 2:
                    AccountManager.withdraw(client);
                    Main.waitScreen();
                    Main.clearScreen();
                    break;

                case 3:
                    AccountManager.deposit(client);
                    Main.waitScreen();
                    Main.clearScreen();
                    break;

                case 4:
                    AccountManager.transferAmount(client);
                    Main.waitScreen();
                    Main.clearScreen();
                    break;

                case 5:
                    System.out.println(client);
                    Main.waitScreen();
                    Main.clearScreen();
                    break;

                case 6:
                    AccountManager.viewBalance(client);
                    Main.waitScreen();
                    Main.clearScreen();
                    break;

                case 7:
                    System.out.println("Logged out!");
                    Main.waitScreen();
                    Main.clearScreen();
                    return;

                default:
                    System.out.println("Invalid choice!");
                    Main.waitScreen();
                    Main.clearScreen();
                    break;
            }
        }
    }
}
