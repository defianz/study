package Samsung;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;

public class Main_13458 {
	
	static int N, B, C;
	static int[] A;
	

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		N = Integer.parseInt(br.readLine());
		String[] line = br.readLine().split(" ");
		A = new int[N];
		for (int i=0; i<N; i++) {
			A[i] = Integer.parseInt(line[i]);
		}
		
		String[] line3 = br.readLine().split(" ");
		B = Integer.parseInt(line3[0]);
		C = Integer.parseInt(line3[1]);
		
		long count = N;
		
		for(int i=0; i<N; i++) {
			
			long suma = A[i] - B;
			if (suma <= 0) continue;
			if (suma % C ==0) {
				count += suma/C;
			} else {
				count += suma/C +1;
			}
			
		}
		
		bw.write(count+"");
		br.close();
		bw.close();
	}

}
