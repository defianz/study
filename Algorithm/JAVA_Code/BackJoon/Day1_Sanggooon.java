package baekjoon;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;


public class Day1_Sanggooon {

	public static void main(String[] args) throws NumberFormatException, IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		int N = Integer.parseInt(br.readLine());
		br.close();
		int k = -1;
		for(int x=0; x<(N/3+1); x++) {
			if((2*x+N)%5 ==0) {k=(2*x+N)/5; break;}
		}
		bw.write(String.valueOf(k));
		bw.close();
	}

}
