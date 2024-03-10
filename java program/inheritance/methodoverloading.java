class viraj
{
    void ishu()
    {
        System.out.println("hi");
    }

    void ishu(int a, int b)
    {
        // this.a=a;
        // this.b=b;
        System.out.println(a+ " "+ b);
    }

    void ishu(String name, double a)
    {
        System.out.println(a+ " "+ name);
    }
}

class methodoverloading
{
    public static void main(String[] args)
    {
        viraj v=new viraj();
        v.ishu();
        v.ishu(5, 3);
        v.ishu("ayush", 34.22);
    }
}

