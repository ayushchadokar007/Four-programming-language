class animal 
{
    String name;
    int a;
}

class dog extends animal
{
    int a=23;
    void ayush()
    {
        System.out.println("How are you..."+ name);
        System.out.println("hi"+ a);
    }
}

class inheritance 
{
    public static void main(String[] args)
    {
         dog d=new dog();
         d.name="ishu";
         d.a=12;
         d.ayush();
    }
}