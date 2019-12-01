package baekjoon;
import java.io.*;

public class Day3_4673 {
	static int fn (int arg) {
		int sum = arg;
		int x = arg;
		while(x !=0) {
			
			sum += x%10;
			x = x/10;
			
		}
		
		return sum;
	}
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		for(int i=1;i<=10000;i++) {
			int tmp =0;
			for(int j=1;j<i;j++) {
				if(fn(j) == i) {
					tmp=1;
				}
			}
			if (tmp==0 ) {bw.write(String.valueOf(i)+"\n");}			
	}
		bw.close();
	}
}
