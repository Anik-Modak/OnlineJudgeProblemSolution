import java.math.BigInteger;
import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		for(int i=0 ; i<10 ; i++)
		{
			BigInteger store , sum , less , nat , cl ;

			sum = in.nextBigInteger() ;
			less = in.nextBigInteger() ;

			store = sum.subtract(less) ;
			nat = store.divide(BigInteger.valueOf(2)) ;
			cl = sum.subtract(nat) ;

			System.out.println(cl) ;
			System.out.println(nat) ;
		}
	}
}

