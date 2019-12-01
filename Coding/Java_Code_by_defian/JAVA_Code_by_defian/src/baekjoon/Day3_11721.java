package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Stack;

public class Day3_11721 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		try {
		String input = br.readLine();
		int n = input.length();
		for(int i=1; i<n+1;i++) {
			bw.write(input.charAt(i-1));
			if(i%10==0 && i!=1) {bw.write("\n");}
		}
		}catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}finally {
			br.close();
			bw.close();
		}
	}

}
