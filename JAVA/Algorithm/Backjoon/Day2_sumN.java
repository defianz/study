package baekjoon;
//import java.util.Stack;
import java.io.IOException;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;


public class Day2_sumN {
	
	static void arrjob(String strt, int[] arrt) {
		for(int i=0; i<arrt.length;i++) {
			arrt[i]=Integer.parseInt(String.valueOf(strt.charAt(i)));
		}
	}
	static int sumarr(int[] arrt) {
		int sumt=0;
		for(int i=0;i<arrt.length;i++) {
			sumt += arrt[i];
		}
		return sumt;
	}

	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
//		Stack stack = new Stack();
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		int arrnum = Integer.parseInt(br.readLine());
		int[] arr = new int[arrnum];
		String str = br.readLine();
		br.close();
		arrjob(str,arr);
		String result = String.valueOf(sumarr(arr));
		bw.write(result);
		
		bw.close();
		
		
	}

}
