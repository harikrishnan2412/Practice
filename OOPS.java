import java.util.*;

class SUM{
    public static void main(String args[])
    {
        System.out.println("enter the number of terms");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum=0;
        int i;
        for(i=0;i<n;i++){
           sum=sum+i;
        }
        System.out.print("Sum of numbers upto" + n+" is "+sum);
    }
    
}