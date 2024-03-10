class Animal
{
    Animal()
    {
        System.out.println("hello sir");
    }
}

class dog extends Animal                                
{
    dog()
    {
        //super()                                             //it was example of constructor in drived class super class automatically called by default
        System.out.println("hi bro");
    }
}

class twoconstructor
{
    public static void main(String[] args)
    {
        dog d=new dog();
    }
}