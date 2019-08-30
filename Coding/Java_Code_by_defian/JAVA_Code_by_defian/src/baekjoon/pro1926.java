package baekjoon;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.LinkedList;
import java.util.Queue;
import java.io.IOException;

import java.util.Scanner;


class Pot{
	int x;
	int y;
	Pot(int a,int b) {
		this.x = a;
		this.y = b;
	}
}


public class pro1926 {



	public static void main(String[] args) throws IOException{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		String[] line = br.readLine().split(" ");
		int n = Integer.parseInt(line[0]);
		int m = Integer.parseInt(line[1]);
		
		 int[] dx = {-1,1,0,0};
		 int[] dy = {0,0,-1,1};
		
		int[][] map = new int[n][m];
		
		for(int i =0 ; i<n ; i++) {
			String[] line2 = br.readLine().split(" ");
			for(int j =0; j<m; j++) {
				map[i][j]= Integer.parseInt(line2[j]);
			}
		}
		
		boolean[][] visited = new boolean[n][m];
		Queue<Pot> q = new LinkedList<Pot>();
		
		int count=0;
		int sjfqdl=0;
		for(int i = 0; i <n; i++) {
			for(int j=0; j <m; j++) {
				if(visited[i][j]) continue;
				visited[i][j] = true;
				if(map[i][j]==0) continue;
				count++;
				Pot p = new Pot(i,j);
				q.offer(p);
				int A =0;
				
				while(!q.isEmpty()) {
					A ++;
					Pot cur = q.poll();
					
					for(int k=0; k<4;k++) {
					int nx = cur.x + dx[k];
					int ny = cur.y + dy[k];
					
					if(0<=nx && nx<n && 0<=ny && ny<m) {
						if(visited[nx][ny]) continue;
						if(map[nx][ny]==0) continue;
						Pot next = new Pot(nx,ny);
						q.offer(next);
						visited[nx][ny]=true;
					}
					
					}
				}
				if (sjfqdl < A) {
					sjfqdl=A;
				}
			}
		}
		bw.write(count+"\n");
		bw.write(sjfqdl+"");
		
		
		br.close();
		bw.close();
		
		
	}

}
