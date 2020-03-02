import java.math.BigInteger;
import java.util.Properties;
import java.util.Scanner;


public class p495 {
    public static void main(String args[]){
        BigInteger fib[] = new BigInteger[5001];
        fib[0] = BigInteger.ZERO;
        fib[1] = fib[2] = BigInteger.ONE;
        for(int i = 3; i <= 5000; i++)
                fib[i] = fib[i-1].add(fib[i-2]);
        Scanner is = new Scanner(System.in);
        int n;
        while(is.hasNextInt()){
              n = is.nextInt();
            System.out.println("The Fibonacci number for "+ n + " is " + fib[n]);
        }

    }
}
