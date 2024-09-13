import java.util.Date;

public class Transaction {  // Immutable class Once created cannot be modified.

    private final char type;                                      // W or D
    private final double amount;
    private final double balance;
    private final Date date;
    private final String description;

    public Transaction(char type, double amount, double balance,String description){
        this.type = type;
        this.amount = amount;
        this.balance = balance;
        this.description = description;
        date = new Date();
    }

    @Override
    public String toString() {
        return "Transaction{" +
                "type=" + type +
                ", amount=" + amount +
                ", balance=" + balance +
                ", date=" + date +
                ", description='" + description + '\'' +
                '}' + "\n";
    }
}
