package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;


public class Day4_1152 {


	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		String input = br.readLine();
		String[] strs = input.split(" ");
		
		
		
		if(input.indexOf(" ")==0 && input.length()==1) {
			bw.write("0");
		}
		else if(input.indexOf(" ")==0 ) {
			bw.write(String.valueOf((strs.length-1)));
		} else {bw.write(String.valueOf(strs.length));}

		
		br.close();
		bw.close();
		
	}

}
