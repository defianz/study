package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;

class Pos2667{
	int x;
	int y;
	Pos2667(int a, int b){
		this.x = a;
		this.y = b;
	}
}

public class bfs2667 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int n = Integer.parseInt(br.readLine());
		
		
		int[][] map = new int[n][n];
		
		for(int i=0; i<n ; i++) {
			String[] line = br.readLine().split("");
			for(int j=0; j<n; j++) {
				map[i][j] = Integer.parseInt(line[j]);
			}
		}
		
		Queue<Pos2667> q = new LinkedList<Pos2667>();
		boolean[][] visited = new boolean[n][n];
		int[] dx = {0,0,-1,1};
		int[] dy = {-1,1,0,0};
		
		int dancount =0;
		ArrayList<Integer> arr = new ArrayList<Integer>();
		
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(visited[i][j]) continue;
				visited[i][j] = true;
				if(map[i][j]==0) continue;
				dancount++;
				Pos2667 start = new Pos2667(i,j);
				q.add(start);
				int hhcount =1;
				while(!q.isEmpty()) {
					Pos2667 cur = q.poll();
					for(int dir=0; dir<4 ; dir++ ) {
						int nx = cur.x + dx[dir];
						int ny = cur.y + dy[dir];
						if( 0<= nx && nx<n && 0<= ny && ny<n) {
							if(visited[nx][ny]) continue;
							visited[nx][ny] = true;
							if(map[nx][ny]==0) continue;
							Pos2667 next = new Pos2667(nx,ny);
							q.add(next);
							hhcount ++;
						}
					}	
				}
				arr.add(hhcount);
			}
		}
		
		int[] hcount = new int[dancount];
		
		for(int i=0; i<dancount; i++) {
			hcount[i] = arr.get(i);
		}
		
		Arrays.sort(hcount);
		
		bw.write(dancount+"\n");
		for(int x : hcount) {
			bw.write(x+"\n");
		}
		
		br.close();
		bw.close();
	}

}
