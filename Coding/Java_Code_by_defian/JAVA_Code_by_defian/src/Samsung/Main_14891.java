package Samsung;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.io.IOException;

class top{
	int sel;
	int tt;
	top(int a, int b){
		this.sel = a;
		this.tt = b;
	}
}


public class Main_14891 {
	
	static int K;
	static int[] key;
	
	static void keycheck() {
		for(int i=0; i<4; i++) {

			if(key[i]>=0) {
				key[i] =  key[i] % 8;
			} else {
				int tmp2 = key[i] % 8;
				key[i] = 8-tmp2;
			}
		}
	}
	
	static int check(int a ) {
		int sol =9999;
		if(a>=0) sol = a%8;
		if(a<0) sol = 8+a%8;
		
		return sol;
	}

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		String[] top1 = br.readLine().split("");
		String[] top2 = br.readLine().split("");
		String[] top3 = br.readLine().split("");
		String[] top4 = br.readLine().split("");
		
		List<String[]> tops = new ArrayList<String[]>();
		
		tops.add(top1);
		tops.add(top2);
		tops.add(top3);
		tops.add(top4);		
		
		key = new int[]{0,0,0,0};
				
//		System.out.println(tops.get(0)[0]);
		K = Integer.parseInt(br.readLine());
		
		int[] dx = new int[] {-1,1};
		for(int i=0; i<K; i++) {
			String[] line = br.readLine().split(" ");
			top start = new top(Integer.parseInt(line[0])-1,Integer.parseInt(line[1]));
			int[] used = new int[]{0,0,0,0};
			
			Queue<top> q = new LinkedList<top>();
			q.add(start);
			
			
			while(!q.isEmpty()) {
				top cur = q.poll();
				used[cur.sel] = cur.tt;
				keycheck();

				for(int dir=0; dir<2; dir++) {
					int nx = cur.sel + dx[dir];
					
					
					if(0<=nx && nx<=3) {
						if(used[nx] != 0) continue;
						if(dx[dir]==-1) {
							if(tops.get(nx)[check(key[nx]+2)].equals(tops.get(cur.sel)[check(key[cur.sel]+6)])) {
								continue;
							}
						}else {
							if(tops.get(nx)[check(key[nx]+6)].equals(tops.get(cur.sel)[check(key[cur.sel]+2)])) {
								continue;
							}
						}						
						top next = new top(nx,cur.tt*(-1));
						q.add(next);
					}
				}
				
			}
			for(int j=0; i<4; i++) {
				key[j] -= used[j];
			}
			
		}
		
		int sol =0;
		int tmp;

		for(int i=0; i<4; i++) {

			if(key[i]>=0) {
				tmp =  key[i] % 8;
			} else {
				tmp =  key[i] % 8;
				tmp = 8 +tmp;
			}
			System.out.println("°ªÀº : " + tops.get(i)[tmp]);
			if (tops.get(i)[tmp].equals("1")) {
				sol += Math.pow(2, i);
				System.out.println(Math.pow(2, i));
			}
		} 
		
		bw.write(sol+"");
		br.close();
		bw.close();
		
	}

}
