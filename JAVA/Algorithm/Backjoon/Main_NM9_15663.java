package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.util.List;
import java.io.IOException;

public class Main_NM9_15663 {
	
	static BufferedWriter bw;
	static int N,M;
	static int[] domain, sols;
	static boolean[] isused;
	static List ll;
	
	static void func(int k, int[] arr2) throws IOException {
		if(k==M) {
			ll.add(arr2);
			return;
		}
		
		for(int i=0; i<N;i++) {
			if(!isused[i]) {
				isused[i]=true;
				domain[i];
				func(k+1,arr2);
				isused[i]=false;
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
		
		
		String[] line2 = br.readLine().split(" ");
		int size = line2.length;
		domain = new int[size];
		for(int i=0; i<size; i++) {
			domain[i] = Integer.parseInt(line2[i]);
		}
		Arrays.sort(domain);
		
		int[] arr2 = new int[M];
		isused = new boolean[N];
		
		func(0, arr2);
		
		for(int i=0; i<ll.size()-1;i++) {
			if(Arrays.equals(ll.  get(i),((Object) ll).get(i+1))) ll.remove(i);
		}
		for(int i=0; i<ll.size();i++){
			for(int j=0; j<M;j++) {
				bw.write("llÀÇ °ªÀº : "+ ll.get(i)[j]+" ");
			}
			bw.write("\n");
		}
		
		
		for(int[] s : ll) {
			for(int i=0; i<M; i++) {
				bw.write(s[i]+" ");
			}
			bw.write("\n");
		}
		
		br.close();
		bw.close();

	}

}
