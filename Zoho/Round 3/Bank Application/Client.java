import java.util.ArrayList;

public class Client {
    private int id;
    private String name;
    private String phone;
    private String password;
    private final ArrayList<Account> accounts;

    public Client(int id, String name, String phone, String password){
        this.id = id;
        this.name = name;
        this.phone = phone;
        this.password = password;
        accounts = new ArrayList<Account>();
    }

    public void addAccount(Account account){
        accounts.add(account);
    }

    public boolean removeAccount(int accountId){
        for(Account account : accounts){
            if(account.getId() == accountId){
                accounts.remove(account);
                return true;
            }
        }
        return false;
    }

    public String getPhone() {
        return phone;
    }

    public void setPhone(String phone) {
        this.phone = phone;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getPassword() {
        return password;
    }

    public ArrayList<Account> getAccounts() {
        return accounts;
    }

    @Override
    public String toString() {
        String result = "Client{" + "id=" + this.id + ", Name=" + this.name + ", Phone=" + this.phone + "}" + "\n";

        for (Account account : accounts) {
            result += account + "\n";
        }

        return result;
    }
}
