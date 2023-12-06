abstract class animal{
   abstract void animalsound();
    void sleep()
    {
        System.out.println("Zzzz...");
    }
}

class pig extends animal
{
    void animalsound()
    {
        System.out.println("the Pig says: wee wee");
    }
}

class main
{
    public static void main(String args[])
    {
        pig mypig = new pig();
        mypig.animalsound();
        mypig.sleep();
    }
}