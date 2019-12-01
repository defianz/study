package Samsung;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.LinkedList;
import java.util.List;
import java.io.IOException;


class day{
	int time;
	int price;
	day(int a, int b){
		this.time = a;
		this.price = b;
	}
}

public class Main_14501 {
	
	static int N;
	static List<day> days;
	static int sol,tmp;
	
	
	static void dfs(int k) {
		if(k>=N) {
			if(tmp>sol) {
				sol=tmp;
			}
			return;	
		}
		
		for(int i=k; i<N; i++) {
			k = days.get(i).time + i;
			if(k<=N) {
				tmp += days.get(i).price;
				dfs(k);
				tmp -= days.get(i).price;
			} else {
				dfs(k);
			}
			
			
		}
	};
	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		N = Integer.parseInt(br.readLine());
		days = new LinkedList<day>();
		
		for(int i=0; i<N; i++) {
			String[] line = br.readLine().split(" ");
			int a = Integer.parseInt(line[0]);
			int b = Integer.parseInt(line[1]);
			days.add(new day(a,b));	
		}
		
		sol = 0;
		tmp = 0;
		
		dfs(0);
		
		bw.write(sol+"");
		
		
		br.close();
		bw.close();

	}

}
