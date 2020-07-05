package Samsung;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.LinkedList;
import java.util.Queue;
import java.io.IOException;


class top2{
	int x;
	int y;
	top2(int a, int b){
		this.x = a;
		this.y = b;
	}
}


public class Main_14891_re {
	
	static int[][] top;
	static int K;
	static int sol;
	
	
	static void updatetop(top2 tmp) {
		int sel2 = tmp.x;
		int dir2 = tmp.y;
		
		if (dir2 == -1) {
			int backup = top[sel2][0];
			top[sel2][0] = top[sel2][1];
			top[sel2][1] = top[sel2][2];
			top[sel2][2] = top[sel2][3];
			top[sel2][3] = top[sel2][4];
			top[sel2][4] = top[sel2][5];
			top[sel2][5] = top[sel2][6];
			top[sel2][6] = top[sel2][7];
			top[sel2][7] = backup;
		}
		if (dir2 == 1) {
			int backup = top[sel2][0];
			top[sel2][0] = top[sel2][7];
			top[sel2][7] = top[sel2][6];
			top[sel2][6] = top[sel2][5];
			top[sel2][5] = top[sel2][4];
			top[sel2][4] = top[sel2][3];
			top[sel2][3] = top[sel2][2];
			top[sel2][2] = top[sel2][1];
			top[sel2][1] = backup;
		}		
	}
	
	
	static void bfs(int[] doit) {
		int sel = doit[0];
		int dir = doit[1];
		
		
		Queue<top2> q = new LinkedList<top2>();
		boolean[] isused = new boolean[4];
		top2 start = new top2(sel,dir);
		q.add(start);
		
		while(!q.isEmpty()) {
			top2 cur = q.poll();
			isused[cur.x] = true;
			
			if(cur.x+1 <= 3 ) {
				if( !isused[cur.x+1] && top[cur.x][2] != top[cur.x+1][6]) {
					top2 next = new top2(cur.x+1,cur.y*(-1));
					q.add(next);
				}
			}
			if(0 <= cur.x-1 ) {
				if(!isused[cur.x-1] && top[cur.x][6] != top[cur.x-1][2]) {
					top2 next = new top2(cur.x-1,cur.y*(-1));
					q.add(next);	
				}	
			}
			
			updatetop(cur);
		}
		
	}

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		top = new int[4][8];
		
		for (int i=0; i<4; i++) {
			String[] line1 = br.readLine().split("");
			for (int j=0; j<8; j++) {
				top[i][j] = Integer.parseInt(line1[j]);
			}
		}
		
		
		K = Integer.parseInt(br.readLine());
		
		for(int i=0; i<K; i++) {
			String[] line2 = br.readLine().split(" ");
			int[] doit = new int[] {Integer.parseInt(line2[0])-1,Integer.parseInt(line2[1])};
			bfs(doit);
		}
		
		
		//doit
		
		sol =0;
		
		for(int i=0; i<4; i++) {
			if(top[i][0] == 1) {
				sol += Math.pow(2, i);
			}
		}
		
		bw.write(sol+"");
		
		
		br.close();
		bw.close();
			
	}

}
