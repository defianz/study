package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;
import java.util.LinkedList;
import java.util.Queue;

class info{
	int ry,rx,by,bx,count;
}



public class pro_13460 {

private static int bfs(String[][] map, info start) {
	
	int[] dy= {-1,1,0,0};
	int[] dx= {0,0,-1,1};
	
	int[][][][] visited = new int[10][10][10][10];
	Queue<info> q = new LinkedList<info>();
	q.offer(start);
	visited[start.ry][start.rx][start.by][start.bx]=1;
	
	int ret = -1;
	while(!q.isEmpty()) {
		info cur = q.peek();
		q.poll();
		if(cur.count >10) break;

		
		if(map[cur.ry][cur.rx].equals("O") && !map[cur.by][cur.bx].equals("O")) {
			ret=cur.count;
			break;
		}
		
		for(int dir=0; dir <4; ++dir) {
			int next_ry = cur.ry;
			int next_rx = cur.rx;
			int next_by = cur.by;
			int next_bx = cur.bx;
			
			while(true) {
				if(!map[next_ry][next_rx].equals("#") && !map[next_ry][next_rx].equals("O")) {
					next_ry += dy[dir];
					next_rx += dx[dir];
				}
				else {
					if(map[next_ry][next_rx].equals("#")){
						next_ry -= dy[dir];
						next_rx -= dx[dir];
					}
					break;
				}
			}
			
			
			while(true) {
				if(!map[next_by][next_bx].equals("#") && !map[next_by][next_bx].equals("O")) {
					next_by += dy[dir];
					next_bx += dx[dir];
				}
				else {
					if(map[next_by][next_bx].equals("#")){
						next_by -= dy[dir];
						next_bx -= dx[dir];
					}
					break;
				}
			}
			
			
			if (next_ry==next_by && next_rx==next_bx) {
				if(!map[next_ry][next_rx].equals("O")) {
					int red_dist = Math.abs(next_ry-cur.ry)+Math.abs(next_rx-cur.rx);
					int blue_dist = Math.abs(next_by-cur.by)+Math.abs(next_bx-cur.bx);
					if(red_dist > blue_dist) {
						next_ry -= dy[dir];
						next_rx -= dx[dir];
					}
					else {
						next_by -= dy[dir];
						next_bx -= dx[dir];
					}
				}
			}
			
			if(visited[next_ry][next_rx][next_by][next_bx] ==0) {
				visited[next_ry][next_rx][next_by][next_bx] =1;
				info next = new info();
				next.ry = next_ry;
				next.rx = next_rx;
				next.by = next_by;
				next.bx = next_bx;
				next.count = cur.count+1;
				q.offer(next);
			}
		}
	}
	
	return ret;
}
	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		String[][] map = new String[10][11];
		
		String line = br.readLine();
		int n= Integer.parseInt(line.split(" ")[0]);
		int m= Integer.parseInt(line.split(" ")[1]);
		
		info start = new info();
		
		
		for(int i=0; i<n;++i) {
			line = br.readLine();
			for(int j=0; j<m; ++j) {
			map[i][j] = line.split("")[j];			
			}
		}
		
		
		for (int y=0; y<n; ++y) {
			for (int x=0; x<m;++x) {
				if(map[y][x].equals("R")) {
					start.ry=y;
					start.rx=x;
				}
				if(map[y][x].equals("B")) {
					start.by=y;
					start.bx=x;
				}
			}
		}
		start.count=0;
		
		int ret= bfs(map,start);
		System.out.println(ret);
		
		
		br.close();
		bw.close();

	}


}
