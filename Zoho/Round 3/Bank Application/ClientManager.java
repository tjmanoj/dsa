import java.util.ArrayList;
import java.util.Scanner;

public class ClientManager {
    private static final ArrayList<Client> clients = new ArrayList<>();
    private static int noOfClients = 0;
    private static final Scanner sc = new Scanner(System.in);


    public static Client createClient(){
        String name;
        String phone;
        String password;

        System.out.print("Enter your Name: ");
        name = sc.nextLine();

        System.out.print("Enter Phone Number: ");
        phone = sc.nextLine();

        System.out.print("Enter new password: ");
        password = sc.nextLine();

        Client client = new Client(++noOfClients,name,phone, password);
        clients.add(client);

        System.out.println("Client created successfully! Login to continue...\nYour client id is " + noOfClients);
        return client;
    }

    public static boolean validateClient(){
        int clientId;
        String password;

        System.out.print("Enter ClientId: ");
        clientId = sc.nextInt();

        sc.nextLine();
        for(Client client : clients){
            if(client.getId() == clientId){

                System.out.print("Enter your password: ");
                password = sc.nextLine();

                if(password.equals(client.getPassword())){
                    System.out.println("Login successful!");
                    ClientDashboard.dashBoardManager(client);
                    return false;
                }
                else{
                    System.out.println("Invalid password!");
                    return false;
                }
            }
        }
        System.out.println("Client not found!");
        return false;
    }

}