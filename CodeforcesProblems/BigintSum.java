import java.util.*;
import java.math.*;

public class Main {
    public static void main(String args[]) {
        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        while(t-- > 0) {
            BigInteger a;
            BigInteger sum = new BigInteger("0");
            for(int i = 0; i < 4; i++) {
                a = sc.nextBigInteger();
                sum = sum.add(a);
            }
            System.out.println(sum);
        }
    }
}
