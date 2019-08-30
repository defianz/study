package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;


public class Day3_15552 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		try {
		int n = Integer.parseInt(br.readLine());
		int i=0;
		while(i<n) {
			String input = br.readLine();
			int A = Integer.parseInt(input.split(" ")[0]);
			int B = Integer.parseInt(input.split(" ")[1]);
			bw.write(String.valueOf(A+B)+"\n");
			i++;
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
