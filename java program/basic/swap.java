class swap
{
    public static void main(String[] args)
    {
        int num1=12, num2=32;
        System.out.println("before swap num1 value: "+ num1);
        System.out.println("before swap num2 value: "+ num2);
        int temp=num1;
        num1=num2;
        num2=temp;
        System.out.println("After swap num1 value: "+ num1);
        System.out.println("After swap num2 value: "+ num2);
    }
}