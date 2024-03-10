enum size{ small, medium, large }

class enumerationcase
{
    public static void main(String[] args)
    {
        System.out.println("constant: "+ size.small);
        System.out.println("position: "+ size.small.ordinal());
        size pizzasize=size.large;
        System.out.println("pizzasize: "+ pizzasize);
    }
}