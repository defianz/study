package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;




public class Main182 {

	static int N, S, curs,cnt,cntm;
	static boolean[] isused;
	
	static void fnc(int curs, int[] arr,int cntm) {
		if(cntm !=0 &&curs ==S) {
			cnt++;
			System.out.print(" °ªÀº : "+ curs + "  ");
			for(int i=0; i<N ; i++) {
				
				System.out.print(isused[i]+",");

			}
			System.out.print("\n");
			return;
		}
		if(cntm == N) return;
		
		for(int i=0; i<N; i++) {
			if(!isused[i]){
				isused[i]=true;
				curs += arr[cntm];
				fnc(curs,arr,cntm+1);
				isused[i]=false;
			}
		}
	}
	
	
	public static void main(String[] args) throws  IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		String[] line = br.readLine().split(" ");
		N = Integer.parseInt(line[0]);
		S = Integer.parseInt(line[1]);
		
		
		int[] arr = new int[N];
		String[] line2 = br.readLine().split(" ");
		for(int i =0; i<N; i++) {
			arr[i] = Integer.parseInt(line2[i]);
		}
		
		cnt=0;
		curs=0;
		cntm=0;
		isused = new boolean[N];
		
		fnc(curs,arr,cntm);
		
		bw.write(cnt+"");
		br.close();
		bw.close();
	}

}
