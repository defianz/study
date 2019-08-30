package Samsung;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.LinkedList;
import java.util.Queue;
import java.io.IOException;


class shark {
	int x;
	int y;
	int size;
	int dist;
	shark(int a, int b, int c, int d){
		this.x = a;
		this.y = b;
		this.size = c;
		this.dist = d;
	}
}


public class Main_16236 {

	static int N, time, cnt;
	static int[][] map;
	static int[] dx,dy;
	
	static void bfs(shark start) {
		
		

		boolean isupdate = true;
		
		while(isupdate) {
		isupdate = false;
		Queue<shark> q = new LinkedList<shark>();
		q.add(start);
					
		shark min = new shark(start.x,start.y,start.size,Integer.MAX_VALUE);
		boolean[][] isvisited = new boolean[N][N];
		isvisited[start.x][start.y]= true;
		
		while(!q.isEmpty()) {
			shark cur = q.poll();
			
			
			for(int dir=0; dir<4; dir++) {
				int nx = cur.x + dx[dir];
				int ny = cur.y + dy[dir];

				if(0<=nx && nx<N && 0<=ny && ny<N && map[nx][ny] <= start.size && !isvisited[nx][ny]) {
					shark next = new shark(nx,ny,map[nx][ny],cur.dist+1);

					if(next.size != 0 && next.size <start.size) {
						if(next.dist < min.dist) {
							min = next;
						} else if(next.dist == min.dist) {
								if(next.x < min.x) {
									min = next;
								} else if(next.x == min.x) {
									if(next.y < min.y) {
										min = next;
									}
								}
							}
						
						}
					isvisited[nx][ny]= true;
					q.add(next);
				}
			}
		}

		
		if(min.size != start.size) {
			cnt++;
			map[min.x][min.y] = 0; 
			time += min.dist;
			if(cnt == start.size) {
				start.size +=1;
				cnt =0;
			}
			start = new shark(min.x,min.y,start.size,0);
			isupdate = true;
		}
		
		}
		return;
	}
	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		N = Integer.parseInt(br.readLine());
		
		map = new int[N][N];
		shark start = null;
		
		for(int i=0; i<N; i++) {
			String[] line = br.readLine().split(" ");
			for(int j=0; j<N; j++) {
				map[i][j] = Integer.parseInt(line[j]);
				if(map[i][j]==9) {
					start = new shark(i,j,2,0);
					map[i][j] =0;
				}
			}
		}
		
		
		// input ¿Ï·á
		
		dx = new int[]{-1,1,0,0};
		dy = new int[]{0,0,-1,1};
		cnt = 0;
		
		bfs(start);
		
		
		bw.write(time+"");
		
		br.close();
		bw.close();
	}

}
