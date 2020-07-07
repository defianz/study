package baekjoon;

import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;

public class Day1_sachicAll {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int A = br.read()-48;
		int B = br.read()-48;
		
		bw.write(String.valueOf(A+B)+"\n");
		bw.write(String.valueOf(A-B)+"\n");
		bw.write(String.valueOf(A*B)+"\n");
		bw.write(String.valueOf(A/B)+"\n");
		bw.write(String.valueOf(A%B));
		br.close();
		bw.close();
	}
}
