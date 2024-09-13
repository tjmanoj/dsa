import java.util.ArrayList;
import java.util.Date;

public class Account {
    private int id;
    private double balance;
    private double annualInterestRate;
    private final Date dateCreated;

    private Client client;
    private final ArrayList<Transaction> transactions;

    public Account(int id, double balance, double annualInterestRate, Client client){
        this.id = id;
        this.balance = balance;
        this.annualInterestRate = annualInterestRate;
        dateCreated = new Date();
        this.client = client;

        transactions = new ArrayList<>();
    }

    private boolean processTransaction(char type, double amount, String successMessage, String failureMessage) {
        if (amount <= 0) {
            System.out.println("Invalid amount");
            return false;
        }

        if (type == 'W' && amount > balance) {
            System.out.println("Insufficient balance!");
            transactions.add(new Transaction(type, amount, balance, failureMessage));
            return false;
        }

        if (type == 'W') {
            balance -= amount;
        } else if (type == 'D') {
            balance += amount;
        }

        transactions.add(new Transaction(type, amount, balance, successMessage));
        return true;
    }

    public boolean withdraw(double amount) {
        boolean result = processTransaction('W', amount, "withdraw successful", "withdraw failed");
        if (result) {
            System.out.println("Withdraw Successful");
        }
        return result;
    }

    public boolean deposit(double amount) {
        boolean result = processTransaction('D', amount, "deposit successful", null);
        if (result) {
            System.out.println("Deposit successful");
        }
        return result;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public double getBalance() {
        return balance;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public double getAnnualInterestRate() {
        return annualInterestRate;
    }

    public void setAnnualInterestRate(double annualInterestRate) {
        this.annualInterestRate = annualInterestRate;
    }

    public Date getDateCreated() {
        return dateCreated;
    }

    public Client getClient() {
        return client;
    }

    public void setClient(Client client) {
        this.client = client;
    }

    @Override
    public String toString() {
        return "Account{" +
                "id=" + id +
                ", balance=" + balance +
                ", annualInterestRate=" + annualInterestRate +
                ", dateCreated=" + dateCreated +
                "\ntransactions=" + transactions.toString() +
                '}';
    }
}
