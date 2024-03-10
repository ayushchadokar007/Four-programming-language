class arraymark
{
    public static void main(String[] args)
    {
        int[] arr={3,5,2,6,4};
        int total=0;
        for(int ishu : arr)
        {
            total=total+ishu;
        }
        int a=total/arr.length;
        System.out.println(a);
    }
}