class string
{
    public static void main(String[] args)
    {
        String name="the legendary sanen....";
        String a="naruto usumaki";
        System.out.println("length: "+ name.length());
        System.out.println("append: "+ name.concat(a));
        System.out.println("charAt: "+ name.charAt(6));
        System.out.println("substring: "+ name.substring(0, 9));          //last char not writen..
        System.out.println("replace: "+ name.replace('t', 'T'));
        System.out.println("\norignal name: "+ name);
        System.out.println("compare: "+ name.equals(a));                  
        System.out.println("contains: "+ name.contains(a));              // checking a contain in name         
    }
}



//         string can not be update ek bar concat print karne ke bad  string apne pehele wala value me aa jata hai.
//                  jaise concat aur replace me change kar ke bad name orignal form me aa gya.
//                     hume update value lene ke liye use ki varaible me store karna hoga.