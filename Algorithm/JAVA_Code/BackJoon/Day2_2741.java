package baekjoon;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;

import java.util.Scanner;

public class Day2_2741 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
//		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int i =0;
		while(i<N) {
			i++;
			bw.write(String.valueOf(i)+"\n");
		}
		bw.close();
		
	}

}
