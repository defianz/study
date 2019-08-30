package baekjoon;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;

public class Main_15652 {
	
	static BufferedWriter bw;
	static int N,M;
	
	
	static void func(boolean[] isused, int[] arr, int k) throws IOException {

		if(k==M) {
			for(int i=0; i<M; i++) {
				bw.write(arr[i]+1+" ");
				
			}
			bw.write("\n");
			return;
		}
		
		for(int i=0; i<N; i++) {
			if(!isused[i]) {
				arr[k] = i;
				for(int j=0; j<i; j++) {
					isused[j]=true;
				}
				func(isused,arr,k+1);
				for(int j=0; j<i; j++) {
					isused[j]=false;
				}
			}
		}
		
	}

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		String[] line = br.readLine().split(" ");
		N = Integer.parseInt(line[0]);
		M = Integer.parseInt(line[1]);
		
		boolean[] isused = new boolean[N];
		int[] arr = new int[M];
		int k =0;
		func(isused,arr,k);
		
		
		
		br.close();
		bw.close();
		
	}

}
