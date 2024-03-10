class array
{
    static void arrayaccess(int[] data)
    {
        System.out.println(data[3]);
    }

    static void arraymodify(int[] data)
    {
         data[0]=45;
        System.out.println(data[0]);
    }

    
    public static void main(String[] args)
    {
        int[] arr={2,5,2,6,3};
        arrayaccess(arr);
        arraymodify(arr);
        
    }
}