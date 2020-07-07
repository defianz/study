package Samsung;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;

public class Main_14888 {
	
	static int N;
	static int[] numbers;
	static int[] yun;
	static int MAX;
	static int MIN;
	
	
	static void dfs(int count, int sum) {
		if(count == N-1) {
			if(sum > MAX) {
				MAX = sum;
			} 
			if(sum < MIN) {
				MIN = sum;
			}
			
			return;
		}
		
		for(int i=0; i<4; i++) {
			if(yun[i] != 0) {
				yun[i]--;
				if( i == 0 ) {
					dfs(count+1,sum+numbers[count+1]);
				} else if( i== 1) {
					dfs(count+1,sum-numbers[count+1]);
				} else if( i== 2) {
					dfs(count+1,sum*numbers[count+1]);
				} else {
					dfs(count+1,sum/numbers[count+1]);
				}
				yun[i]++;
			}
		}
		
	}
	
	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		N = Integer.parseInt(br.readLine());
		numbers = new int[N];
		
		String[] line2 = br.readLine().split(" ");
		for(int i=0; i<N; i++) {
			numbers[i] = Integer.parseInt(line2[i]);
		}
		
		
		yun = new int[4];
		String[] line3 = br.readLine().split(" ");
		for(int i=0; i<4; i++) {
			yun[i] = Integer.parseInt(line3[i]);
		}
		
		MAX = Integer.MIN_VALUE;
		MIN = Integer.MAX_VALUE;
		
		dfs(0,numbers[0]);
		
		
		bw.write(MAX+"\n"+MIN);
		
		br.close();
		bw.close();
		
	}

}
