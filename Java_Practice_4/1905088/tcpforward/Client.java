package tcpforward;

import util.NetworkUtil;

import java.util.Scanner;

public class Client {
    static final String serverAddress = "127.0.0.1";
    static final int serverPort = 33333;

    public Client(String serverAddress, int serverPort) {
        process(menu());
    }

    public static int menu() {
        System.out.println("Enter an option:");
        System.out.println("1. Connect");
        System.out.println("2. GetList");
        System.out.println("3. SendOne");
        System.out.println("4. Broadcast");
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        return n;
    }

    public void process(int op) {
        if (op == 1) {
            try {
                System.out.print("Enter name of the client: ");
                Scanner scanner = new Scanner(System.in);
                String clientName = scanner.nextLine();
                NetworkUtil networkUtil = new NetworkUtil(serverAddress, serverPort);
                networkUtil.write(clientName);
                new ReadThreadClient(networkUtil);
                new WriteThreadClient(networkUtil, clientName);
            } catch (Exception e) {
                System.out.println(e);
            }
        }
        else {
            System.out.println("Not Connected To Server");
        }
    }

    public static void main(String args[]) {
        Client client = new Client(serverAddress, serverPort);
    }
}



