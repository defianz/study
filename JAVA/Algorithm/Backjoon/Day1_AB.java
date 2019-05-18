package baekjoon;

import java.io.BufferedWriter;
import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Day1_AB {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bf = new BufferedWriter(new OutputStreamWriter(System.out));
		
		int A = bi.read()-48;
		bi.read();
		int B = bi.read()-48;
		
		int C = A+B;
		bf.write(String.valueOf(C));
		bi.close();
		bf.close();
		
	}

}
