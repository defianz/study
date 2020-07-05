package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;


public class pro_9095 {
	
	public static int fun(int input) {
	if (input == 1 ) return 1;
	if (input == 2) return 2;
	if (input ==3 ) return 4;
	int ret = 0;
	ret = fun(input-1) + fun(input-2) + fun(input-3);
	return ret;
	
	}
	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int n = Integer.parseInt(br.readLine());
		
		int[] arr = new int[n];
		for(int i=0;i<n;i++) {
			arr[i]=Integer.parseInt(br.readLine());
			bw.write(fun(arr[i])+"\n");
		}
		br.close();
		bw.close();
	}

}
