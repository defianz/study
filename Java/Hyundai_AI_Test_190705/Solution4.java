import java.util.LinkedList;
import java.util.Queue;

class node{
		int x;
		int y;
		node(int a, int b){
			this.x = a;
			this.y = b;
		}
	}

public class Solution4 {
	

	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
	
		int[][] v = {{1,1,0,1,1},{0,1,1,0,0},{0,0,0,0,0},{1,1,0,1,1,},{1,0,1,1,1},{1,0,1,1,1}};
		
		
		int N = v.length;
		int M = v[0].length;
//		System.out.println(N);
//		System.out.println(M);
		
		int count =0;
		int maxarea =0; 
		int[] dy = new int[]{-1,1,0,0};
		int[] dx = new int[]{0,0,-1,1};
						
		boolean[][] visited = new boolean[N][M];
		
		for(int i=0; i<N; i++) {
			for(int j=0; j<M; j++) {
				if(v[i][j]!=0 && visited[i][j]==false) {
				
				int localarea =0;
				count++;
				node start = new node(i,j);
				Queue<node> q = new LinkedList<node>();
				q.add(start);
				
				while(!q.isEmpty()) {
					node cur = q.poll();
					for(int dir =0; dir<4; dir++) {
						int nx = cur.x + dx[dir];
						int ny = cur.y + dy[dir];
						
						if(nx <0 || N-1<nx || ny<0 || M-1<ny){
							continue;
						}
						
						if (v[nx][ny]!=0 && visited[nx][ny]==false ) {
							node next = new node(nx,ny);
							q.add(next);
							visited[nx][ny]=true;
							localarea++;
						}	
						}
					}
					if(localarea>maxarea) {
						maxarea = localarea;
					}
				}
				}
			
			}
//		System.out.println(count);
//		System.out.println(maxarea);
			
		}
}
