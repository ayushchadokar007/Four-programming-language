class ternary
{
    public static void main(String[] args)
    {
        int a=12, b=3, c=32;
        int r=(a>b)?(a>c?a:c):(b>c?b:c);
        System.out.println(r);
    }

}