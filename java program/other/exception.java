class exception
{
    public static void main(String[] args)
    {
        int[] arr={3,1,45,75};
        System.out.println(arr[0]);             
       
        /*    System.out.println(arr[7]);
                  exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: Index 7 out of bounds for length 4
                    at exception.main(exception.java:7)     */
                 //jab hame pata ho ki iski sentence me error aa sakta hai to program aage run nahi hota
                    //tab exception use kara jata hai

        try
        {
             System.out.println(arr[7]);
        }
        catch(Exception ayush)
        {
            //do somthing after cathching
        }

        System.out.print("the legendary sanen...");
    } 
}