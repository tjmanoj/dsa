import java.util.ArrayList;
import java.util.Scanner;

public class AccountManager {
    private static ArrayList<Account> accounts = new ArrayList<>();
    private static int noOfAccounts = 0;

    public static void createAccount(Client client){
        double balance;
        double annualInterestRate;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter balance: ");
        balance = sc.nextDouble();
        System.out.print("Enter Interest rate: ");
        annualInterestRate = sc.nextDouble();

        Account account = new Account(++noOfAccounts, balance, annualInterestRate, client);

        accounts.add(account);
        client.addAccount(account);
        System.out.println("Account Created Successfully!\nAccount Number: " + noOfAccounts);
    }

    public static void withdraw(Client client){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Account Number: ");
        int accountNumber = sc.nextInt();

        for(Account account: client.getAccounts()){
            if(account.getId() == accountNumber){
                System.out.print("Enter amount: ");
                double amount = sc.nextDouble();
                account.withdraw(amount);
                return;
            }
        }
        System.out.println("Account not found");
    }

    public static void deposit(Client client){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Account Number: ");
        int accountNumber = sc.nextInt();

        for(Account account: client.getAccounts()){
            if(account.getId() == accountNumber){
                System.out.print("Enter amount: ");
                double amount = sc.nextDouble();
                account.deposit(amount);
                return;
            }
        }
        System.out.println("Account not found");
    }

    public static void transferAmount(Client client){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your Account Number: ");
        int senderAccountNumber = sc.nextInt();

        Account sendAccount = null;

        for(Account acc: accounts) {
            if (acc.getId() == senderAccountNumber) {
                sendAccount = acc;
            }
        }

        if(sendAccount == null){
            System.out.println("Account not found!");
            return;
        }

        System.out.print("Enter receiver Account Number");
        int receiverAccountNumber = sc.nextInt();


        Account receiverAccount = null;

        for(Account acc: accounts){
            if(acc.getId() == receiverAccountNumber){
                receiverAccount = acc;
            }
        }

        if(receiverAccount == null){
            System.out.println("Account not found!");
            return;
        }

        System.out.print("Enter amount to transfer: ");
        double transferAmount = sc.nextDouble();

        if(sendAccount.withdraw(transferAmount)){
            receiverAccount.deposit(transferAmount);
        }
    }

    public static void viewBalance(Client client){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter account Number: ");
        int accountNumber = sc.nextInt();

        for(Account account: client.getAccounts()){
            if(account.getId() == accountNumber){
                System.out.println("Balance: " + account.getBalance());
                return;
            }
        }

        System.out.println("Account not found!");
    }
}
