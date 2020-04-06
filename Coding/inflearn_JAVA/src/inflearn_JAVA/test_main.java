package inflearn_JAVA;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class test_main {
	
//	public int plus(int a, int b) {
//		int res;
//		res = a+ b;
//		
//		return res;
//	}
	
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
//		SYSTEM.OUT.PRINTLN(APPLICANT.PLSS(10,5));
//		
//		SYSTEM.OUT.PRINTF("%S","HELLO WORLD\N");
//		SYSTEM.OUT.PRINTLN("HELLO WORLD");
//		SYSTEM.OUT.PRINTF("%D", 100%3);
//		int[] a = null;
//		System.out.println(a);
//		a= new int[5];
//		System.out.println(a);
//		System.out.println(a[0]);
//		a[0]=5;
//		System.out.println(a[0]);
//		int a =5;
//		int b= 5;
//		String str1 = new String("hi");
//		String str2= new String("hi");
//		System.out.println(a==b);
//		
//		System.out.println(str1==str2);
//		System.out.println(str1.equals(str2));
		
//		testVO c1 = new testVO();
//		c1.va = 100;
//		System.out.println(c1.va);
//		
//		c1.method1();
//		c1.method2();
//		
//		int[] c2 = new int[5];
//		
//		try {
//			BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//			int kor1,kor2,kor3;
//			int eng1,eng2,eng3;
//			int mat1,mat2,mat3;
//			
//			System.out.println();
//			
//		} catch (Exception e) {
//			// TODO: handle exception
//		}
//		
		
		
		System.out.println(Integer.MAX_VALUE);
		System.out.println(Integer.MIN_VALUE);
		System.out.println(Float.MAX_VALUE);
		System.out.println(Float.MIN_VALUE);
		
		Integer intClass = new Integer(100);
		int intValue = intClass.intValue();
		System.out.println(intValue);
		Runtime run = Runtime.getRuntime();
		try {
//			run.exec("explorer.exe http://www.naver.com");
		} catch (Exception e) {
			// TODO: handle exception
		}
		System.out.println(run.totalMemory());
		
		
		String str1 = "이건 뭐지";
		String str2 = "이건 뭐지";
		String str3 = new String("이건 뭐지");
		if(str1==str3) {
			System.out.println("같음");
		} else {
			System.out.println("다름");
		}
	}

}

//class Applicant {
//	int a,b;
//
//	
//	public static int plss(int a, int b) {
//		int res;
//		res = a + b;
//		
//		return res;
//	}
//}
