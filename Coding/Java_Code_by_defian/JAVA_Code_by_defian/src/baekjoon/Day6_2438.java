package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.io.IOException;

 class Day6_2438 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		Integer N = Integer.valueOf(br.readLine());
		for(int i=1;i<N+1;i++) {
			for(int j=0;j<i;j++) {
				bw.write("*");
			}
			bw.write("\n");
		}
		
		br.close();
		bw.close();
	}

}
