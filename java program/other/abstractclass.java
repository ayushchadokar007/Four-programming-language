abstract class animal
{
    abstract void ishu();
    void viraj()
    {
        System.out.println("the legendary sanen...");
    }
}

class dog extends animal                                              //in abstract class both method are present abstract and non-abstract
{
    void ishu()
    {
        System.out.println("naruto usumaki..");
    }
}

class abstractclass
{
    public static void main(String[] args)
    {
        dog d=new dog();
        d.viraj();
        d.ishu();
    }
}