package baekjoon;

import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;

public class Main_1001 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int A,B, SOL;
		
		
		String input = br.readLine();
		A = Integer.parseInt(input.split(" ")[0]);
		B = Integer.parseInt(input.split(" ")[1]);
		SOL = A-B;
		
		bw.write(SOL+"");
		
		br.close();
		bw.close();
	}

}
