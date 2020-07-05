package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.io.IOException;

public class Main_NM7_15656 {
	
	static BufferedWriter bw;
	static int N,M;
	static int[] domain,arr;
	static boolean[] isused;
	
	static void func(int k) throws IOException {
		if(k==M) {
			for(int i=0; i<M; i++) {
				bw.write(arr[i]+" ");
			}
			bw.write("\n");
			return;
		}
		
		for(int i=0; i<N;i++) {
				arr[k] = domain[i];
				func(k+1);
		}
		
	}
	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		String[] line = br.readLine().split(" ");
		N = Integer.parseInt(line[0]);
		M = Integer.parseInt(line[1]);
		
		
		String[] line2 = br.readLine().split(" ");
		int size = line2.length;
		domain = new int[size];
		for(int i=0; i<size; i++) {
			domain[i] = Integer.parseInt(line2[i]);
		}
		Arrays.sort(domain);
		
		arr = new int[M];
		isused = new boolean[N];
		
		func(0);
		
		br.close();
		bw.close();

	}

}
