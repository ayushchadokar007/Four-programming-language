class A
{
    private
    String name;

    String getname()
    {
        return name;
    }
    void setname(String n)
    {
        name=n;
    }
}

class privateaccess
{
    public static void main(String[] args)
    {
        A a1=new A();
        a1.setname("ayush");
        String result=a1.getname();
        System.out.println("name: "+ result);
    }
}