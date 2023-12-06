class inheritance{
    public static void main(String args[])
    {
        officer o = new officer();
        manager m = new manager();
        
        m.name="orry";
        m.age=20;
        m.phone=987653428;
        m.salary=100000;
        m.department= "idk";
        
        o.name="sorry";
        o.age=202;
        o.phone=92228;
        o.salary=190909000;
        o.specialization="that also no";
    
    System.out.println("Officer Details:");
        System.out.println("Name: "+o.name);
        System.out.println("Age: "+o.age);
        System.out.println("Phone Number: "+o.phone);
        o.printsalary();
        System.out.println("Specialization: "+o.specialization);

        System.out.println();

        System.out.println("Manager Details:");
        System.out.println("Name: "+m.name);
        System.out.println("Age: "+m.age);
        System.out.println("Phone Number: "+m.phone);
        m.printsalary();
        System.out.println("Department: "+m.department);
}
}