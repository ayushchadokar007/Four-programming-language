class continuebreak
{
    static void continuenum()
    {
        for(int i=1; i<=10; i++)
        {
            if (i==5)
            {
                continue;
            }
            System.out.println("Number: "+ i);
        }

    }

    static void breaknum()
    {
        for(int i=1; i<=10; i++)
        {
            if (i==5)
            {
                break;
            }
            System.out.println("Number: "+ i);
        }

    }
    public static void main(String[] args)
    {
        System.out.println("continue Statement...");
        continuenum();
        System.out.println("break Statment....");
        breaknum();

        

    }
}