class array2d
{
    static void firstcase()
    {
         int[][] arr={ {2,5}, {5,6}, {54, 32} };
        //for each 
        for(int[] ishu: arr)
        {
            for(int viraj: ishu)
            {                                                            //by for each
                System.out.println("array are: "+ viraj);
            }
        }

    }

     static void secondcase()
    {
        int[][] ab={  {2,4}, {45,32}, {32,6} };
           
        for(int i=0; i<=2; i++)
        {
            for(int j=0; j<=1; j++)
            {
                System.out.println(ab[i][j]);                           //by matrix
            }
        }
    }

     static void thirdcase()
    {
        int[][] ab={  {2,4}, {45,32}, {32,6} };                         //direct print
        System.out.println(ab[2][1]);
    }

    public static void main(String[] args)
    {
        //firstcase();
        //secondcase();
        thirdcase();
       
    }
}