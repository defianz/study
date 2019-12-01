package Samsung;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.LinkedList;
import java.util.Queue;
import java.io.IOException;


class robot{
	int x;
	int y;
	int d;
	robot(int a, int b, int c){
		this.x = a;
		this.y = b;
		this.d = c;
	}
}

public class Main_14503 {
	
		static int N,M;
		static robot start;
		static int[][] map;
		static int[] dx,dy;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		String[] line1 = br.readLine().split(" ");
		N = Integer.parseInt(line1[0]);
		M = Integer.parseInt(line1[1]);
		
		String[] line2 = br.readLine().split(" ");
		start = new robot(Integer.parseInt(line2[0]),Integer.parseInt(line2[1]),Integer.parseInt(line2[2]));
		
		map = new int[N][M];
		
		for(int i=0; i<N; i++) {
			String[] line3 = br.readLine().split(" ");
			for(int j=0; j<M; j++) {
				map[i][j] = Integer.parseInt(line3[j]);
			}
		}
		
		int sol =0;
		dx = new int[] {-1,0,1,0};
		dy = new int[] {0,1,0,-1};
							
		Queue<robot> q = new LinkedList<robot>();
		q.add(start);
		
		while(!q.isEmpty()) {
			robot cur = q.poll();
			if(map[cur.x][cur.y]==0) {
				map[cur.x][cur.y]=2;
				sol++;
			}
			
			for(int dir=0; dir<4; dir++) {
				int ndir = (cur.d + 3 - dir) % 4;
				int nx = cur.x + dx[ndir];
				int ny = cur.y + dy[ndir];
				
				if(nx<0 || nx>=N || ny<0 || ny>=M || map[nx][ny] != 0) {
					continue;
				}
				
				q.add(new robot(nx,ny,ndir));
				break;
			}
			
			if(q.isEmpty()) {
				int ndir = cur.d;
				int nx = cur.x + dx[(ndir+2) % 4];
				int ny = cur.y + dy[(ndir+2) % 4];
				
				if(nx<0 || nx>=N || ny<0 || ny>=M || map[nx][ny] ==1) {
					break;
				} else {
					q.add(new robot(nx,ny,ndir));
				}
				
			}
//			
//			
//			if(cur.rd==4) {
//				
//			}
//			
//												
//			if(cur.d ==0 && cur.y-1 >=0) {
//				if(map[cur.x][cur.y-1]==0) {
//					sol++;
//					map[cur.x][cur.y]=-1;
//					q.add(new robot(cur.x,cur.y-1,3,0));
//				} else {
//					cur.d=3;
//					cur.rd++;
//					q.add(cur);
//				}
//			} else if( cur.d == 1 && cur.x-1 >=0) {
//				if(map[cur.x-1][cur.y]==0) {
//					sol++;
//					q.add(new robot(cur.x-1,cur.y,0,0));
//				} else {
//					cur.d=0;
//					cur.rd++;
//					q.add(cur);
//				}
//			} else if( cur.d == 2 && cur.x+1<=N) {
//				if(map[cur.x+1][cur.y]==0) {
//					sol++;
//					q.add(new robot(cur.x+1,cur.y,1,0));
//				} else {
//					cur.d=1;
//					cur.rd++;
//					q.add(cur);
//				}
//			} else {
//				if(map[cur.x][cur.y+1]==0) {
//					sol++;
//					q.add(new robot(cur.x,cur.y+1,2,0));
//				} else {
//					cur.d=2;
//					cur.rd++;
//					q.add(cur);
//
//				}
//			}
			
			
			
			
			
		}
		
		
		
		
		bw.write(sol+"");
		
		br.close();
		bw.close();
	}
}
