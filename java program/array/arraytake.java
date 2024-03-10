import java.util.Scanner;
import java.util.Arrays;
class arraytake
{
    public static void main(String[] args)
    {
        int i;
        System.out.print("Enter data: ");
        Scanner s=new Scanner (System.in);
        int[] data=new int[4];
        for( i=0; i<=3; i++)
        {
            data[i]=s.nextInt();
             
        }

        Arrays.sort(data);                          // they are arrange in asseccending order

        System.out.print("sort Array are: ");
        for(int b : data)
        {
            System.out.print(b+ " ");              //apply for each loop, and for loop bhi use kar sakte the 
       
        }

    }
}        