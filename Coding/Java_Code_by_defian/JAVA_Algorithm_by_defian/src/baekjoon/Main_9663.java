package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;

public class Main_9663 {
	
	static int N;
	static int cnt=0;
	
	static void func(int cur, boolean[] isused1,boolean[] isused2,boolean[] isused3) {
		if(cur==N) {
			cnt++;
			return;
		}
		
		for(int i=0; i<N; i++) {
			if(isused1[i]|| isused2[cur+i] || isused3[cur-i+N]
					)
				continue;
			isused1[i]=true;
			isused2[cur+i] =true;
			isused3[cur-i+N] =true;
			func(cur+1,isused1,isused2,isused3);
			isused1[i]=false;
			isused2[cur+i] =false;
			isused3[cur-i+N] =false;
		}
	}

	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		N = Integer.parseInt(br.readLine());
				
		boolean[] isused1 = new boolean[N];
		boolean[] isused2 = new boolean[2*N];
		boolean[] isused3 = new boolean[2*N];
		
		int cur=0;
		
		func(cur,isused1,isused2,isused3);
		
		bw.write(cnt+"");
		br.close();
		bw.close();

	}

}
