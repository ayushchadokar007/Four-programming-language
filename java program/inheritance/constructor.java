class defaultcase
{
    int a;
    String b;
    boolean c;
    defaultcase()
    {
        a=12; b="ayush"; c=false;                        //default constructor
    }
    void A()                                               //thay create automatic a default construtor when deafault construtor are made comment after the value 0,null,false.
    {
         System.out.println(a+" "+b+" "+c);
    }
}

 class parametercase
{
    int x, y;
    parametercase(int a, int b)
    {
        x=a; y=b;
    }
    parametercase(int a, String b)              //we have create second object for sconde parameter
    {
        System.out.println(a+" "+b);
    }
    void b()
    {
        System.out.println(x+" "+y);
    }
}

class copycase
{
    int a; String b; boolean c=false;
    copycase()
    {
        a=34; String b="viraj"; 
         System.out.println(a+" "+b);
    }
    copycase(copycase ref)
    {
        a=ref.a;                                              //confused how to work
        b=ref.b;
        System.out.println(a+" "+b+" "+c);                       //string in error not print name viraj
    }
}

class privatecase
{
    private  privatecase()
    {
        int a=23, b=22; String c="samrath";                //they give error because private class only access by class not outside of class 
        System.out.print(a+" "+b+" "+c);                         //agar public static main() ko privarecase class me likhe to correct hoga
    }
}


class constructor
{
    public static void main(String[] args)
    {
        defaultcase d=new defaultcase();
        d.A();

        parametercase p=new parametercase(12, 23);
        p.b();
        parametercase para=new parametercase(12, "sidharth");

        copycase cp=new copycase();
        copycase cy=new copycase(cp);

       // privatecase pri=new privatecase();    
    }
}










//default copy private parameter