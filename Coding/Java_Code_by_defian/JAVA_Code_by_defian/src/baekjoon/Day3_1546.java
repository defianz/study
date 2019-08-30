package baekjoon;
import java.io.*;

public class Day3_1546 {

	public static void main(String[] args) throws IOException{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		try {
		int n = Integer.parseInt(br.readLine());
		String input = br.readLine();
		int max = Integer.parseInt(input.split(" ")[0]);
		double sum = Integer.parseInt(input.split(" ")[0]);
		for(int i=1;i<n;i++) {
			if (max <= Integer.parseInt(input.split(" ")[i])) {
				max = Integer.parseInt(input.split(" ")[i]);
			}
			sum += Integer.parseInt(input.split(" ")[i]);
		}
		bw.write(String.format("%.2f", sum/max/n*100));
		
		}catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}finally {
			br.close();
			bw.close();
		}
	}

}
