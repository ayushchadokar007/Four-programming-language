import java.util.Scanner;
class arraytake2
{
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        System.out.print("Enter array element: ");
        int[][] data=new int[2][2];
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                data[i][j]=s.nextInt();
            }
        }
       
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                 System.out.println("Array are..."+ data[i][j]);          //by for loop take
            }
        }
    }
}