package doitjavaalgorithm;
import java.util.Scanner;


public class ReverseArray {
	
	public static void swap(int[] a, int idx1, int idx2) {
		int t = a[idx1];
		a[idx1] = a[idx2];
		a[idx2] = t;
	}
	
	static void reverse(int[]a) {
		for(int i=0;i<a.length/2;i++) {
			swap(a,i,a.length-1-i);
		}
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner stdIn = new Scanner(System.in);
		
		System.out.println("요솟수 : ");
		int num = stdIn.nextInt();
		
		int[] x = new int[num];
		
		for(int i=0; i<num; i++) {
			System.out.println(i+1+"번째 요솟값은?");
			x[i]=stdIn.nextInt();
		}
		

		System.out.println("x의 정값은?");
		for(int i=0; i<num; i++) {
			System.out.println(x[i]);
		}
		reverse(x);
		System.out.println("x의 역값은?");
		for(int i=0; i<num; i++) {
			int[] t;
			t = x.clone();
			System.out.println(t[i]);
		}
	}

}
