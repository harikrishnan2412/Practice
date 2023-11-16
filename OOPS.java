class Pen {
    String colour;
    String type;

    public void write(){
        System.out.println("this pen writes!!");
    }
    public void printColour(){
        System.out.println(this.colour);
    }
    public void printType(){
        System.out.println(this.type);
    }
}

class Student{
    int age;
    String name;

    public void info(){
        System.out.println("Name : "+ this.name);
        System.out.println("Age : "+ this.age);
    }
    Student(String name,int age){
        this.name=name;
        this.age=age;
    }
}

public class OOPS {
    public static void main(String[] args) {
        Student s1 = new Student("hari", 20);

        s1.info();
    }
    
}