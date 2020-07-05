package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;
import java.util.LinkedList;
import java.util.Queue;


class Pos{
	int x;
	int y;
	Pos(int a, int b){
		this.x = a;
		this.y = b;
	}
}

public class main_2178 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		String[] line = br.readLine().split(" ");
		
		int N = Integer.parseInt(line[0]);
		int M = Integer.parseInt(line[1]);
		int[][] map = new int[N][M];
		
		
		for(int i=0; i<N;i++) {
			String[] line2 = br.readLine().split("");
			for(int j=0;j<M;j++) {
				map[i][j] = Integer.parseInt(line2[j]);
			}
		}
		
		int[][] dist = new int[N][M];
		
		for(int i=0; i<N;i++) {
			for(int j=0; j<M;j++) {
				dist[i][j]=-1;
			}
		}
		
		Queue<Pos> q = new LinkedList<Pos>();
		int[] dx = {0,0,-1,1};
		int[] dy = {-1,1,0,0};
		
		Pos start = new Pos(0,0);
		dist[0][0] = 1;
		q.add(start);

		while(!q.isEmpty()) {
			Pos cur = q.poll();

			for(int dir=0; dir < 4; dir++) {
				int nx = cur.x + dx[dir];
				int ny = cur.y + dy[dir];

				if(0<=nx && nx<N && 0<=ny && ny<M) {
					if(map[nx][ny]==0) continue;
					if(dist[nx][ny]<0 || dist[nx][ny]>dist[cur.x][cur.y]+1 ) {
						Pos next = new Pos(nx,ny);
						dist[nx][ny] = dist[cur.x][cur.y]+1;
						q.add(next);
						
					} 					
				}
			}



		}
		bw.write(dist[N-1][M-1]+"");
		
		br.close();
		bw.close();
		
	}

}
