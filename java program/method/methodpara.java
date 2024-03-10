class methodpara
{
    static void sum(int a, int b)
    {
        int sum=a+b;                                //parameter
        System.out.println(sum);
    }

    static int product(int c, int d)
    {
        int product=c*d;                            //product and prototype.
        return product;
    }
    public static void main(String[] args)
    {
        sum(3, 6);
        int result=product(4, 8);
        System.out.println(result);
        
    }
}