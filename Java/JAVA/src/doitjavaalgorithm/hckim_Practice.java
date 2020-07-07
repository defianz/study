package doitjavaalgorithm;
import java.awt.CardLayout;
import java.util.Scanner;


public class hckim_Practice {

	static int sumOf(int[] a) {
		int sum = 0;
		
		for(int i=0;i<a.length;i++) {
			sum += a[i];
		}
		
		return sum;
	}
	static boolean equals(int[] a, int[] b) {
		if(a.length != b.length) return false;
		for(int i=0;i<a.length;i++) {
			if(a[i] != b[i]) return false;
		}
		
		return true;
	}
	  int cardConvR(int x, int r, char[] d) {
		 int digit= 0;
		 String dchar = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		 
		 do {
			 d[digit++] = dchar.charAt(x % r);
			 x /= r;
		 } while (x != 0);
		 return digit;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		Scanner Stdin = new Scanner(System.in);
//		int num;
//		System.out.println("요솟수는?");
//		num = Stdin.nextInt();
//		int[] intarg = new int[num];
//		
//		for(int i=0;i<num;i++) {
//			System.out.println(i+1+"값은?");
//			intarg[i]=Stdin.nextInt();
//		}
//		System.out.println("합은?"+sumOf(intarg));
		char[] d = new char[32];
		hckim_Practice a= new hckim_Practice();
		
		System.out.println(a.cardConvR(10,2,d));
		System.out.print(d);
		
	}

}
