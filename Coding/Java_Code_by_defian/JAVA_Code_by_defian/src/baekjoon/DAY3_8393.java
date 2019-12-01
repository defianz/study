package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;


public class DAY3_8393 {

	public static void main(String[] args) throws IOException  {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		try {
		int n = Integer.parseInt(br.readLine());
		int sol = n*(n+1)/2;
		bw.write(String.valueOf(sol));
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		} finally {
			br.close();
			bw.close();
		}
		
	}

}
