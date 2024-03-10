class Animal
{
    String name;
    int a=1, age;

    void said()
    {
        System.out.println("Naruto Usumaki ");                        //super class call by super();
    }
}

class dog extends Animal
{
    int a=23;                        
    void said()            
    {
        super.said();
        System.out.println("Name: "+ name);                               //Method overriding
        System.out.println("Age: "+ age);
        System.out.println("drived a: "+ a);                              //a value not change answer is 1
        System.out.println("super a: "+ super.a);
    }
}

class methodoverriding
{
    public static void main(String[] args)
    {
        dog d1=new dog();
        d1.name="ayush";
        d1.age=21;
        d1.said();
    }
}