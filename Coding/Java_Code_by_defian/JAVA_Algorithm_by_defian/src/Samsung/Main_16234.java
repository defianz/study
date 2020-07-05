package Samsung;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.LinkedList;
import java.util.Queue;
import java.io.IOException;


class contu{
	int x;
	int y;
	contu(int a, int b){
		this.x = a;
		this.y = b;
	}
}


public class Main_16234 {
	
	static int N, L, R;
	static int[][] map;
	static int[] dx, dy;

	public static void main(String[] args) throws IOException{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		String[] line = br.readLine().split(" ");
		N = Integer.parseInt(line[0]);
		L = Integer.parseInt(line[1]);
		R = Integer.parseInt(line[2]);
		
		map = new int[N][N];
		for (int i=0; i<N; i++) {
			String[] line2 = br.readLine().split(" ");
			for (int j=0; j<N; j++) {
				map[i][j] = Integer.parseInt(line2[j]);
			}
		}
		
		boolean isupdate = true;
		int cnt = 0;
		dx = new int[] {-1,1,0,0};
		dy = new int[] {0,0,-1,1};
		
		while(isupdate) {
			isupdate =false;
			
			int lab=0;
			int[][] label = new int[N][N];
			
			int[] count = new int[25001];
			int[] sum = new int[25001];
			
			for(int i=0; i<N; i++) {
				for(int j=0; j<N; j++) {
					lab++;
					contu start = new contu(i,j);
					
					Queue<contu> q = new LinkedList<contu>();
					q.add(start);
					boolean[][] isvisited = new boolean[N][N];
					isvisited[start.x][start.y] =true; 

					
					while(!q.isEmpty()) {
						contu cur = q.poll();
						
						label[cur.x][cur.y]= lab;
						count[lab]++;
						sum[lab] += map[cur.x][cur.y];
						
						for(int dir =0 ; dir<4; dir++) {
							int nx = cur.x + dx[dir];
							int ny = cur.y + dy[dir];
							
							if(nx<0 || N-1<nx || ny<0 || N-1<ny) {
								continue;							
							}
							
							int dif = Math.abs(map[nx][ny]-map[cur.x][cur.y]);
							if(!isvisited[nx][ny] && L<= dif && dif <= R ) {
								isvisited[nx][ny] = true;
								contu next = new contu(nx,ny);
								q.add(next);
							}
							
						}
					}
				}
			}
			
			for (int a=0; a<N; a++) {
				for(int b=0; b<N; b++) {
					int k = label[a][b];
					int avg = sum[k] / count[k];
					if ( map[a][b] != avg) {
						map[a][b] = avg;
						isupdate = true;
					}
				}
			}
			if(isupdate) {
				cnt++;
			}
		}
		
		bw.write(cnt+"");
		
		br.close();
		bw.close();
	}

}
