package baekjoon;
import java.io.*;

public class Day3_4344 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		try {
		int n = Integer.parseInt(br.readLine());
		int i=0;
		while(i<n) {
			i++;
			String input = br.readLine();
			int linen = Integer.parseInt(input.split(" ")[0]);
			int sum=0;
			for(int j=1;j<linen+1;j++) {
				sum += Integer.parseInt(input.split(" ")[j]);
			}
			int avg = sum/linen;
			int total=0;
			for(int j=1;j<linen+1;j++) {
				if(Integer.parseInt(input.split(" ")[j])>avg) {total+=1;}
			}			
			double sol = (double)total/(double)linen*100;
			bw.write(String.format("%.3f", sol)+"%\n");
		}
		
		}catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}finally {
			br.close();
			bw.close();
		}

	}

}
