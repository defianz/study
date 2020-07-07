package Samsung;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;


class gamsi{
	int x;
	int y;
	int type;
	gamsi(int a, int b, int d){
		this.x = a;
		this.y = b;
		this.type = d;
	}
}

public class Main_15683 {
	
	static int N, M, MIN, countg;
	static int[][] map;
	static int[] rotsize;
	static gamsi[] cctv;
	
	
	static void mapbackup(int[][] des, int[][] start) {
		for(int i=0; i<N; i++) {
			for(int j=0; j<M; j++) {
				des[i][j] = start[i][j];
			}
		}
		
	}
	
	static void update(int dir, gamsi cctv) {
		dir = (dir % 4);
		
		if ( dir == 0 ) {
			for(int y= cctv.y +1 ; y < M; y++) {
				if(map[cctv.x][y] == 6) break;
				map[cctv.x][y]= -1; 
			}
		}
		if ( dir == 1 ) {
			for(int x = cctv.x -1 ; 0 <= x; x--) {
				if(map[x][cctv.y] == 6) break;
				map[x][cctv.y]= -1; 
			}
		}
		if ( dir == 2 ) {
			for(int y = cctv.y - 1 ; 0 <= y; y--) {
				if(map[cctv.x][y] == 6) break;
				map[cctv.x][y] = -1; 
			}
		}
		if ( dir == 3 ) {
			for(int x = cctv.x + 1 ; x < N; x++) {
				if(map[x][cctv.y] == 6) break;
				map[x][cctv.y]= -1; 
			}
		}
	}
	
	
	static void dfs(int cctv_index) {
		if(cctv_index==countg) {
			//count
			int candi =0;
			for(int i=0; i<N; i++) {
				for(int j=0; j<M; j++) {
					if(map[i][j]==0) candi++;
				}
			}
			
			if(candi < MIN) MIN=candi;
			return;
		}
		
		int[][] backup = new int[N][M];
		int type = cctv[cctv_index].type;
		
		for(int dir=0; dir<rotsize[type]; dir++) {
			mapbackup(backup,map);
			// map update;
			
			if (type == 0) {
				update(dir, cctv[cctv_index]);
			} else if (type == 1) {
				update(dir, cctv[cctv_index]);
				update(dir+2, cctv[cctv_index]);
			} else if (type == 2 ) {
				update(dir, cctv[cctv_index]);
				update(dir+1, cctv[cctv_index]);
			} else if (type == 3 ) {
				update(dir, cctv[cctv_index]);
				update(dir+1, cctv[cctv_index]);
				update(dir+2, cctv[cctv_index]);
			} else if (type == 4 ) {
				update(dir, cctv[cctv_index]);
				update(dir+1, cctv[cctv_index]);
				update(dir+2, cctv[cctv_index]);
				update(dir+3, cctv[cctv_index]);
			}
			dfs(cctv_index +1);
			mapbackup(map,backup);
			// map
		}
		
	}
	

	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		String[] line1 = br.readLine().split(" ");
		N = Integer.parseInt(line1[0]);
		M = Integer.parseInt(line1[1]);
		map = new int[N][M];
		cctv = new gamsi[8];
		rotsize = new int[] {4,2,4,4,1};
		countg = 0;
		MIN = 100;
		
		for(int i=0; i<N; i++) {
			String[] line = br.readLine().split(" ");
			for(int j=0; j<M; j++) {
				map[i][j] = Integer.parseInt(line[j]);
				if(map[i][j]>0 && map[i][j] !=6) {
					gamsi t = new gamsi(i,j,map[i][j]-1);
					cctv[countg]=t;
					countg++;
				}
				
			}
		}

		dfs(0);

		bw.write(MIN+"");
		
		br.close();
		bw.close();

	}

}
