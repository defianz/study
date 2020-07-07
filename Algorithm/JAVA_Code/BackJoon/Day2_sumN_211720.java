package baekjoon;
import java.io.IOException;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Day2_sumN_211720 {
	
	
	public static void main(String[] args) throws NumberFormatException, IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		int count = Integer.parseInt(br.readLine());
		String str = br.readLine();
		int sol=0;
		for(int i=0;i<count;i++) {
			sol += Integer.parseInt(String.valueOf(str.charAt(i)));
		}
		
		bw.write(String.valueOf(sol));
		br.close();
		bw.close();
	}

}
