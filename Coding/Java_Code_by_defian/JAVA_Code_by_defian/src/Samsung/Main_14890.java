package Samsung;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;


public class Main_14890 {
	
	static int N,L;
	static int[][] map;

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		String[] line1 = br.readLine().split(" ");
		
		N = Integer.parseInt(line1[0]);
		L = Integer.parseInt(line1[1]);
		map = new int[2*N][N];
		
		for (int i=0; i<N; i++) {
			String[] line2 = br.readLine().split(" ");
			for(int j=0; j<N; j++) {
				map[i][j] = Integer.parseInt(line2[j]);
				map[j+N][i] = Integer.parseInt(line2[j]);
			}
		}
		int tmp =0;
		
		for(int i=0; i<2*N; i++) {
			int cnt =1;
			for(int j=0; j<N-1; j++) {
				if(map[i][j]-map[i][j+1]==0) {
					cnt++;
				} else if(map[i][j+1]-map[i][j]==1 && cnt >=L) {
						cnt=1;
				} else if(map[i][j]-map[i][j+1] > 1|| map[i][j]-map[i][j+1]<-1) {
					break;
				} else if (map[i][j]-map[i][j+1] == 
						1 && cnt>=0) {
					cnt = 1-L;
				} else {
					break;
				}
				
				if(cnt >= 0 && j==N-2) {
					tmp++;
				}
			}			
		}
		
		bw.write(tmp+"");
		
		br.close();
		bw.close();

	}

}
