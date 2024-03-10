class Animal
{
    protected
    String name;
    void ishu()
    {
        System.out.println("hello naruto usumaki");
    }
}

class dog extends Animal
{
    void ayush()
    {
        name="ayush";
        System.out.println("Name: "+ name);
    }
}  

class protectedaccess
{
    public static void main(String[] args)
    {
        dog d1=new dog();
        d1.ayush();
        //name="ayush";                                       //that are error because protected value alway access by inheritance drived class not main, and outside of class
        d1.ishu();      
    }
}