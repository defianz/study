package baekjoon;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.OutputStreamWriter;
import java.io.InputStreamReader;
import java.io.IOException;


public class Day1_devide {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int a = br.read()-48;
		br.read();
		br.read();
		int b = br.read()-48;
		br.close();
		double c = (double)a / (double)b;
		String str = String.format("%.10f",c);
		bw.write(str);
		bw.close();
	}

}
