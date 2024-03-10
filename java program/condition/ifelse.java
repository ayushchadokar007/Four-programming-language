import java.util.Scanner;
class ifelse
{
    public static void main(String[] args)
    {
        int a=2324;
        System.out.println("Enter password: ");
        Scanner s= new Scanner(System.in);
        int b=s.nextInt();
        if(a==b)
        {
            System.out.println("Wellcome ayush");
        }

        else
        {
            System.out.print("Sorry! Worng password...");
        }
    }
}