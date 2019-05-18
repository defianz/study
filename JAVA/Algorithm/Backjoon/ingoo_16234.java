package baekjoon;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;

import java.util.Queue;
import java.util.LinkedList;

public class ingoo_16234 {
	
	
	public static void create_area(int sy,int sx, int status[][50], int count, int sum) {
		
	}
	
	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		String line = br.readLine();
		int N = Integer.parseInt(line.split(" ")[0]);
		int L = Integer.parseInt(line.split(" ")[1]);
		int R = Integer.parseInt(line.split(" ")[2]);
		
		int[][] map = new int[50][50];
		
		for (int i = 0 ; i < N; i++) {
			String rline = br.readLine();
			for (int j =0 ; j<N ; j++) {
				map[i][j] = Integer.parseInt(rline.split(" ")[j]);
			}
		}
		
		boolean update = true;
		
		while(update) {
			update = false;
			
			int[][] status = new int[50][50];
			int area_index =0;
			int[] count = new int[25001];
			int[] sum = new int[25001];
			for (int y=0; y<N; y++) {
				for (int x=0; x<N; x++) {
					if(status[y][x]==0) {
//						create_area(y,x,status, area_index,count[area_index],sum[area_index]);
					}
				}
			}
			
			
			
			
		}
		
	}

}
