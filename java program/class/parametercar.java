class parametercar
{
    int gear;
    String name;
    parametercar(int gearno, String nameji)
    {
        this.gear=gearno;                                  
        this.name=nameji;
    }
    
    public static void main(String[] args)
    {
        parametercar c1=new parametercar(4, "mustange");
        parametercar c2=new parametercar(6, "Rolls Royal...");

        System.out.print("gear1: "+ c1.gear);
        System.out.println(" name1: "+ c1.name);
        System.out.print("gear2: "+ c2.gear);
        System.out.print(" name2: "+ c2.name);



    }
}