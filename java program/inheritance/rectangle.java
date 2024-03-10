class rectangle
{
    int area;
    rectangle(int len, int brea)
    {
         area=len*brea;
    }
    void ayush()
    {
         System.out.println("area: "+ area);

    }
    
    public static void main(String[] args)
    {
        rectangle rect=new rectangle(3, 5);
        rect.ayush();
        

        
    }
}