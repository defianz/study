package baekjoon;
import java.util.Scanner;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;
import java.io.IOException;

public class Day4_2577 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		BufferedWriter bf = new BufferedWriter(new OutputStreamWriter(System.out));
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		int sol = A*B*C;
		String sol_string = String.valueOf(sol);
		for(int j=0;j<10;j++) {
			int tmp =0;
			for(int i=0; i< sol_string.length(); i++) {
			if(String.valueOf(sol_string.charAt(i)).equals(String.valueOf(j))){
				
				tmp += 1;
			}
			}
			bf.write(String.valueOf(tmp)+"\n");
		}
		bf.close();
		
	}

}
