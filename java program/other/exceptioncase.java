class A
{
    void simple()
    {                                                                   //simple exception 
        try
        {
            int a=12/0;
            System.out.println(a);
        }                              
        catch(Exception e)                                            //there are two type mutiple catch block and multiple exception in singal catch block
        {
            System.out.println("Error is...."+ e);
        }  
        finally
        {
            System.out.println("try again later...???");
        }               
    }

    void multi()
    {
        try
        {
            int[] f={2, 5, 2};                                                    //multiple catch block
            System.out.println(f[1]/0);
        }
        catch(Exception e1)
        {
            System.out.println(e1);
        }
        catch(Exception e2)
        {
            System.out.println(e2);
        }
    }

    void another()
    {
         try
        {
            int a=32/0;                                                      //multiple exception in a singal catch block
            System.out.println(a);
        }
        catch(Arithmetic Exception | ArrayIndexOutOfBounds Exception e)
        {
            System.out.println(e);
        }
    }
}

class exceptioncase
{
    public static void main(String[] args)
    {
        A ay=new A();
        ay.simple();
        ay.multi();
       ay.another();
    }
}