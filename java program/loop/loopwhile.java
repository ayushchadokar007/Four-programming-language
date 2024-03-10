import java.util.Scanner;
class loopwhile
{
    public static void main(String[]args)
    {
        int i;
        System.out.print("Enter number: ");
        Scanner s=new Scanner(System.in);
        i= s.nextInt();

        while(i<=3)
        {
             System.out.println("hi guys");
             i++;
        }
       
    }
}