package Samsung;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.io.IOException;

class pos{
	int x;
	int y;
	pos(int a, int b){
		this.x =a;
		this.y =b;
	}
}

public class Main_15686 {
	
	static int N,M,sizechick, sizehouse, sol;
	static int[][] map;
	static ArrayList<pos> house,chick,selchick;
	static boolean[] isused;

	
	static void dfs(int k, int sx) {
		if(k==M) {
			calculate();
			
			return;
		}
		
		for(int i=sx; i<sizechick; i++) {
			if(!isused[i]) {
				isused[i] = true;
				selchick.add(chick.get(i));
				dfs(k+1,i);
				isused[i] = false;						;
				selchick.remove(selchick.size()-1);
			}
	}
	}
	
	
	static void calculate() {
		int sum =0;
		for(int i=0; i<sizehouse; i++) {
			pos housez = house.get(i);
			int hx = housez.x;
			int hy = housez.y;
			
			int mindist = Integer.MAX_VALUE;
			for (int j=0; j<selchick.size(); j++) {
				pos chickz = selchick.get(j);
				int dist = Math.abs(hx-chickz.x) + Math.abs(hy-chickz.y);
				if(mindist> dist) {
					mindist=dist;
				}
			}
			sum += mindist;
		}
		if (sol > sum) sol=sum;
//		selchick.clear();		
	}

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		String[] line1 = br.readLine().split(" ");
		N = Integer.parseInt(line1[0]);
		M = Integer.parseInt(line1[1]);
		
		house = new ArrayList<pos>();
		chick = new ArrayList<pos>();
		selchick = new ArrayList<pos>();
		sol = Integer.MAX_VALUE;
		
		
		for(int i=0; i<N; i++) {
			String[] line2 = br.readLine().split(" ");
			for (int j=0; j<N; j++) {
				int tmp = Integer.parseInt(line2[j]);
				if(tmp==2) {
					chick.add(new pos(i+1,j+1));
				} else if(tmp==1) {
					house.add(new pos(i+1,j+1));
				}
				
			}
		}
		
		sizechick = chick.size();
		sizehouse = house.size();
		
		
		isused = new boolean[sizechick];
		
		
		dfs(0,0);
		
		
		bw.write(sol+"");
		br.close();
		bw.close();
		
	}

}
