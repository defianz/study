package baekjoon;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;

public class Day6_10250 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int roop = Integer.parseInt(br.readLine());
		
		for(int i=0;i<roop;i++) {
			String input= br.readLine();
			int H = Integer.parseInt(input.split(" ")[0]);
			int N = Integer.parseInt(input.split(" ")[2]);
			
			int mok = N/H+1;
			int rem = N%H;
			
			if(rem==0) {
				bw.write(String.valueOf(H*100+mok-1)+"\n");
			} else {
				bw.write(String.valueOf(rem*100+mok)+"\n");
			}
		}
		br.close();
		bw.close();
	}

}
