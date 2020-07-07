package baekjoon;
import java.io.IOException;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;


public class Day3_1065 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw =new BufferedWriter(new OutputStreamWriter(System.out));
		try {
		String input = br.readLine();
		int intinput = Integer.parseInt(input);
		if(intinput<100) bw.write(input);
		if(intinput>=100 && intinput != 1000) {
			int count=99;
			for(int i=100; i<=intinput;i++) {
			int A = i/100;
			int B = (i/10)%10;
			int C = i%10;
			if( 2*B==A+C ) {
				count += 1;}
			}
			bw.write(String.valueOf(count));
		}
		if(intinput==1000) bw.write("144");
		
		
		}catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}finally {
			br.close();
			bw.close();
		}
	}

}
