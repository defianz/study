package Samsung;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.LinkedList;
import java.util.Queue;
import java.io.IOException;


class xxx{
	int x;
	int y;
	xxx(int a, int b){
		this.x = a;
		this.y = b;
	}
}


public class Main_14500_2 {

	static int N, M;
	static int[][] map;
	static int[] dx,dy;
	static int MAX;
	static boolean[][] visited;
	
	static void dfs(int k, int sum) {
		if(k==4) {
			if(sum > MAX) MAX=sum;
			return;
		}
		
	}
	
	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		String[] line = br.readLine().split(" ");
		N = Integer.parseInt(line[0]);
		M = Integer.parseInt(line[1]);
		
		map = new int[N][M];
		
		for(int i=0; i<N; i++) {
			String[] line2 = br.readLine().split(" ");
			for(int j=0; j<M; j++) {
				map[i][j] = Integer.parseInt(line2[j]);
			}
		}
		
		MAX = 0;
		dy = new int[]{-1,1,0,0};
		dx = new int[]{0,0,-1,1};
		
		visited = new boolean[N][M];
		
//		dfs(0);
		
		
		for (int i=0; i<N; i++) {
			for(int j=0; j<M; j++) {
				
				int count =1;
				xxx start = new xxx(i,j);
				Queue<xxx> q = new LinkedList<xxx>();
				q.add(start);
				
				while(!q.isEmpty()) {
					xxx cur = q.poll();
					for (int dir=0; dir<4; dir++) {
						int nx = cur.x + dx[dir];
						int ny = cur.y + dy[dir];
						
						if(nx<0 || N-1<nx || ny<0 || M-1<ny ) {
							continue;
						}						
						xxx next = new xxx(nx,ny);
						q.add(next);
						count++;
						if(count == 4) break;
					}
					
					
				}
				
			}
		}
		
		
//		bw.write(sol+"");
		
		br.close();
		bw.close();
	}

}
