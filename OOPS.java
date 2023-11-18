public class Student {
    String name;
    int age;

    public void printInfo(String name) {
        System.out.println(this.name);
    }

     public void printInfo(int age) {
        System.out.println(this.age);
    }
}


public class OOPS {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.name=hari;
        s1.age=20;

        s1.printInfo(s1.name);
    }
}

