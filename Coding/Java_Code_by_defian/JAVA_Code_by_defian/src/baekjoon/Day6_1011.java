package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;


public class Day6_1011 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int N = Integer.parseInt(br.readLine());
		
		for(int i=0;i<N;i++) {
			String input = br.readLine();
			int X = Integer.parseInt(input.split(" ")[0]);
			int Y = Integer.parseInt(input.split(" ")[1]);
			
			// y=x+1
			
			long distance = Y-X;
			long count=0;
			for(int i1=1;i1<Math.pow(2,31)-1;i1++) {
				if(Math.pow(i1,2)<=distance && distance<Math.pow(i1+1,2)) {
					if(i1==1) {count+=distance;}
					else {
					long tmp =(long) (distance%Math.pow(i1,2));
					count += 2*i1-1;
					if(tmp %i1==0) {
						count += tmp/i1;
					} else {
						count += tmp/i1 +1;
					}
					}
				break;
				}
			}
			bw.write(String.valueOf(count)+"\n");
			
			
		}
		
		br.close();
		bw.close();
	}


}
