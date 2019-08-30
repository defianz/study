package Samsung;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;


public class Main14889 {
	
	static int N, suma,sumb,sol;
	static int[][] map;
	static boolean[] isused;
	
	
	static void func(int k, int sx) {
		if(k==N/2) {
//			점수계산
			cal();
			return;
		}
		
		for(int i=sx;i<N;i++) {
			if(!isused[i]) {
				isused[i]=true;
				func(k+1,i);
				isused[i]=false;
			}
		}
		
		
	}
	
	public static void cal() {
		
		int[] arr2 = new int[N/2];
		int[] arr3 = new int[N/2];
		int a =0;
		int b =0;
		for(int i=0; i<N;i++) {
			if(isused[i]== false) {
				arr3[b]=i+1;
				b++;
			}else {
				arr2[a]=i+1;
				a++;
			}
		}
		
		suma = Getstat(arr2);
		sumb = Getstat(arr3);
		
		int dif = Math.abs(suma-sumb);
		if(sol >dif) sol=dif;

	}
	
	public static int Getstat(int[] arrtmp) {
		
		int sum=0;
		int len = N/2;
		
		for(int i=0; i<len; i++) {
			for(int j=i; j<len; j++) {
				sum += map[arrtmp[i]-1][arrtmp[j]-1];
				sum += map[arrtmp[j]-1][arrtmp[i]-1];
			}
		}
		return sum;

	}
	
	public static void main(String[] args) throws  IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		N = Integer.parseInt(br.readLine());
		map = new int[N][N];
		
		for(int i=0; i<N; i++) {
			String[] line = br.readLine().split(" ");
			for(int j=0; j<N; j++) {
				map[i][j] = Integer.parseInt(line[j]);
			}
		}
		
		
		isused = new boolean[N];
		suma =0;
		sumb =0;
		sol =Integer.MAX_VALUE;
		
		func(0,0);
		
		bw.write(sol+"");
		
		br.close();
		bw.close();
	}

}
