package baekjoon;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;


public class re_15652 {
	
	static BufferedWriter bw;
	static int N,M;
	static int[] arr;
	static boolean[] isused;
	
	static void func(int k, int sx) throws IOException {
		if(k==M) {
			for(int i=0; i<arr.length; i++) {
				bw.write(arr[i]+" ");
			}
			bw.write("\n");
			return;
		};
		
		for(int i=sx; i<N; i++) {
				arr[k]=i+1;
				func(k+1,i);
			}
			
			
	}

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		String[] line = br.readLine().split(" ");
		N= Integer.parseInt(line[0]);
		M= Integer.parseInt(line[1]);
		
		isused = new boolean[N];
		arr = new int[M];
		
		func(0,0);
				
		br.close();
		bw.close();
	}

}
