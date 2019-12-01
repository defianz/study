package baekjoon;
import java.io.*;

public class Day3_10817 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		String input = br.readLine();
		int A = Integer.parseInt(input.split(" ")[0]);
		int B = Integer.parseInt(input.split(" ")[1]);
		int C = Integer.parseInt(input.split(" ")[2]);
		if(A>=B) {
			if(B>=C){
				bw.write(String.valueOf(B));	
			}else if(A>=C) {
				bw.write(String.valueOf(C));
			}else {
				bw.write(String.valueOf(A));
			}
		} else {
			if(C>=B) {
				bw.write(String.valueOf(B));	
			}else if(A>=C) {
				bw.write(String.valueOf(A));
			}else {
				bw.write(String.valueOf(C));
			}
		}
		br.close();
		bw.close();
	}

}
