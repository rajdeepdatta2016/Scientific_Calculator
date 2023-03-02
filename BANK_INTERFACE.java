import java.util.Scanner;
import java.math.BigInteger;
public class BANK_INTERFACE
{
    private int balance;
    private BigInteger phNo;
    String firstName = new String();
    String lastName = new String();
    String city = new String();
    String state = new String();
    String vill = new String();
    public void getData()
    {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter First Name of the Candidate: ");
        firstName = scan.nextLine();
        System.out.println("Enter Last Name of The Candidate: ");
        lastName = scan.nextLine();
        System.out.println("Enter Village: ");
        vill = scan.nextLine();
        System.out.println("Enter City: ");
        city = scan.nextLine();
        System.out.println("Enter Phone Number: ");
        phNo = scan.nextBigInteger();
        System.out.println("Enter Amount to be Deposited: ");
        balance = scan.nextInt();
    }
    public void showData()
    {
        System.out.println("************ WELCOME TO RD BANK **********");
        System.out.println("******** Here is your Bank Details *******");
        System.out.println();
        System.out.println("Name = "+firstName+" "+lastName);
        System.out.println();
        System.out.println("Mobile Number = "+phNo);
        System.out.println();
        System.out.println("Address = "+vill+", "+city);
        System.out.println();
        System.out.println("Your Current Balance = "+balance);
    }
    
}