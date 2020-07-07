package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;

public class day6_2292 {

	public static void main(String[] args) throws IOException{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		Integer N = Integer.valueOf(br.readLine());
		
		int answer = 0;
		if(N==1) {
			answer=1;
		}else {
		for(int i=1; i<=N;i++) {
			int sol= (int) (3*Math.pow(i,2)-3*i+2);
			int sol_1 = 6*i;
			if(N-sol < sol_1) {
				answer=i+1;
				break;
			}
		}
		}
		bw.write(String.valueOf(answer));
		
		
		br.close();
		bw.close();
	}

}
