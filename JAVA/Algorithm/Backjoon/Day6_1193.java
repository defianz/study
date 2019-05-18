package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;


public class Day6_1193 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		Integer N = Integer.valueOf(br.readLine());

		String result ="1/1";
		for(int n=1;n<10000;n++) {
			if(n*(n+1)/2< N && N<=(n+1)*(n+2)/2) {
				if((n+1)%2!=0) {
					int rem = N-(n*(n+1)/2);
					int a = n+2-rem;
					int b = rem;
					result = a+"/"+b;
				}else {
					int rem = N-(n*(n+1)/2);
					int a = rem;
					int b = n+2-rem;
					result = a+"/"+b;
				}
			}
		}
		bw.write(result);
		br.close();
		bw.close();
	}

}
