import java.io.*;
import java.util.*;

class FibonacciExample1{  
public static void main(String args[])  
{    
 int n1=0,n2=1,n3,i,count;    
 Scanner in = new Scanner(System.in);
  int sum=0;

 count = in.nextInt();


 System.out.print(n1+" "+n2);//printing 0 and 1    
    
 for(i=2;i<count;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  System.out.print(" "+n3);    
  n1=n2;    
  n2=n3;  
  sum=n1+n2; 
 }    
  System.out.println();
  System.out.println(sum);
}
  
} 
