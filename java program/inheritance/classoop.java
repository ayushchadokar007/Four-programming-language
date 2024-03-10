class pen
{
    float id;
    String name;
    int age;

    void personinfo(String name, int age)
    {
        System.out.println("Name: "+ name);        //parameter 
        System.out.println("Age: "+ age);
    }   
}

class classoop
{
    public static void main(String[] args)
    {
        pen p1=new pen();
        p1.id=24122;
        System.out.println("ID is "+ p1.id);
        p1.personinfo("ayush", 21);
    }
}
