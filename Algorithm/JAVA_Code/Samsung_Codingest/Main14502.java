package Samsung;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.LinkedList;
import java.util.Queue;


class Pos02 {
	int x;
	int y;
	Pos02(int a, int b){
		this.x =a;
		this.y =b;
	}
}

public class Main14502 {
	
	static int N, M, nx,ny, countm;
	static int area=0;
	static int [][] map;
	static int [][] testmap;
	static boolean[][] visited;
	static Pos02[] starts;
	static int[] dx,dy;
	static int tmp=0;
	static int tmp2=0;
	
	
	static void btr(int cnt, int sx, int sy) {		
		if(cnt==3) {
			testmap = new int[N][M];
			for(int i=0; i<N; i++) {
				for(int j=0; j<M;j++) {
					testmap[i][j]=map[i][j];
				}
			}
			bfs(testmap);
			return;
		}
		
		
		for(int x=sx; x<N; x++) {
			for(int y=sy; y<M; y++) {
				tmp2++;
				
				if(map[x][y]==0) {
					map[x][y]=1;
					
					
					btr(cnt+1,x,y);
//					System.out.println("이거는 백트래킹 횟수" + tmp2);
					map[x][y]=0;
				}
				
				
			}
			sy=0;
		}
	}

	
	static void bfs(int[][] tt) {
//		tmp++;
//		System.out.println("이거는 dfs 횟수 : " + tmp);
		Queue<Pos02> q = new LinkedList<Pos02>();
		visited = new boolean[N][M];

		for(int i=0; i<N; i++) {
			for(int j=0; j<M; j++) {
				if(tt[i][j]==1 || visited[i][j]) {
					visited[i][j] = true; continue;
				}
				if(tt[i][j]==2 ) {
					visited[i][j]=true;
					Pos02 start = new Pos02(i,j);

					q.offer(start);

					while(!q.isEmpty()) {
						
						Pos02 cur = q.poll();
						
						for(int dir=0; dir<4; dir++) {
							nx = cur.x +dx[dir];
							ny = cur.y +dy[dir];
							
							if(0<=nx && nx<N && 0<= ny && ny<M) {
								
								if(tt[nx][ny]==0 && visited[nx][ny]==false) {								
								tt[nx][ny]=2;
								visited[nx][ny] = true;
								Pos02 next = new Pos02(nx,ny);
								q.add(next);
							}
						}
						}
					}

				}	
			}
		}
		if(area<calarea(tt)) {
			area=calarea(tt);
			
		}
	}
	
	
	static int calarea(int[][] tt) {
		int sol=0;
		
		for(int i=0; i<N;i++) {
			for(int j=0; j<M; j++) {
				if(tt[i][j]==0) sol++;
			}
		}
//		System.out.println(sol);
		return sol;
	}

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		String[] line = br.readLine().split(" ");
		N = Integer.parseInt(line[0]);
		M = Integer.parseInt(line[1]);
		map = new int[N][M];
		dy= new int[]{-1,1,0,0};
		dx= new int[]{0,0,-1,1};
		
		for (int i=0; i<N; i++) {
			String[] line2 = br.readLine().split(" ");
			for (int j=0; j<M; j++) {
				map[i][j] = Integer.parseInt(line2[j]);
			}
		}

	
		btr(0,0,0);
		
		
		bw.write(area+"");
		
		br.close();
		bw.close();
	}

}
