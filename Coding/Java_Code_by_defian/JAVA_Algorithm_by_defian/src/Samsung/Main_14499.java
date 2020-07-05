package Samsung;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;

class dice{
	int sx;
	int sy;
	dice(int a, int b){
		this.sx = a;
		this.sy = b;
	}
}

public class Main_14499 {
	
	static int N, M, x, y, K;
	static dice dice;
	static int[][] map;
	static int[] input, garo, sero;
	
	static void go(int k) {
		if(k == 1 ) {
			int tmp = garo[2];
			garo[2] = garo[1];
			garo[1] = garo[0];
			garo[0] = garo[3];
			garo[3] = tmp;
			sero[2] = garo[2];
			sero[0] = garo[0];
		} else if(k == 2 ) {
			int tmp = garo[2];
			garo[2] = garo[3];
			garo[3] = garo[0];
			garo[0] = garo[1];
			garo[1] = tmp;
			sero[2] = garo[2];
			sero[0] = garo[0];
		} else if( k == 3) {
			int tmp = sero[2];
			sero[2] = sero[1];
			sero[1] = sero[0];
			sero[0] = sero[3];
			sero[3] = tmp;
			garo[2] = sero[2];
			garo[0] = sero[0];
		} else {
			int tmp = sero[2];
			sero[2] = sero[3];
			sero[3] = sero[0];
			sero[0] = sero[1];
			sero[1] = tmp;
			garo[2] = sero[2];
			garo[0] = sero[0];
		}
		return;
	}

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		String[] line1 = br.readLine().split(" ");
		N = Integer.parseInt(line1[0]);
		M = Integer.parseInt(line1[1]);
		dice = new dice(Integer.parseInt(line1[2]),Integer.parseInt(line1[3]));
		K = Integer.parseInt(line1[4]);
		
		map = new int[N][M];
		for(int i=0; i<N; i++) {
			String[] line2 = br.readLine().split(" ");
			for(int j=0; j<M; j++) {
				map[i][j] = Integer.parseInt(line2[j]);
			}
		}
		
		input = new int[K];
		String[] line3 = br.readLine().split(" ");
		for(int i=0; i<K; i++) {
			input[i] = Integer.parseInt(line3[i]);
		}
		
		garo = new int[] {0,0,0,0};
		sero = new int[] {0,0,0,0};
			
		// 입력값 모두 입력 완료
		int[] dx = new int[] {0,0,-1,1};
		int[] dy = new int[] {1,-1,0,0};
		
		for(int i=0; i<K; i++) {
			
			int nx = dice.sx + dx[input[i]-1];
			int ny = dice.sy + dy[input[i]-1];
			
			if(nx<0 || N <= nx || ny<0 || M <= ny) {
				continue;
			}
			
			go(input[i]);
			
			dice.sx = nx;
			dice.sy = ny;
			
			if(map[nx][ny] != 0) {
				garo[2] = map[nx][ny];
				sero[2] = map[nx][ny];
				map[nx][ny] = 0;
			} else	if(map[nx][ny] == 0) {
				map[nx][ny] = garo[2];
			}
			
			int upper = sero[0];
			bw.write(upper+"\n");
		}
		
		
		
		br.close();
		bw.close();
	}

}
