package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;


public class Day5_8958 {
	static int fn(String str, int n) {
		if(n==0 && !String.valueOf(str.charAt(n)).equals("O")) return 0;
		if(n==0 && String.valueOf(str.charAt(n)).equals("O")) return 1;
		if(String.valueOf(str.charAt(n)).equals("O")) {
			return fn(str,n-1)+1;
		} else {
			return 0;
		}
	}

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int N = Integer.parseInt(br.readLine());
		
		for(int i=0;i<N;i++) {
			String input = br.readLine();
			int sol =0;
			for(int j=0;j<input.length();j++){
				sol += fn(input,j);
				}
			bw.write(String.valueOf(sol)+"\n");
			}		
		
		br.close();
		bw.close();
	}

}
