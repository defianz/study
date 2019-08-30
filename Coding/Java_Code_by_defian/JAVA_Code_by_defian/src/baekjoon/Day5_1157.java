package baekjoon;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.io.IOException;

public class Day5_1157 {
	
	static int counting(String[] str, int i, int result) {
		if(i==str.length-1) return result;
		if(str[i].equals(str[i+1])) {
//			System.out.println(str[i]+" 여기로오나?");
			result += 1;
			return counting(str,i+1,result);
		} 		
		return result;
	}
	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		String input = br.readLine();
		String inputCapt = input.toUpperCase();
		String[] array = new String[inputCapt.length()];
		for(int i=0; i<inputCapt.length();i++) {
			array[i]=String.valueOf(inputCapt.charAt(i));
//			bw.write(array[i]+"\n");
		}
		Arrays.sort(array);
		int tmp=0;
		int max=counting(array,0,1);
//		bw.write("값은? "+String.valueOf(max)+"\n");
		int index =0;
		boolean equal = false;
		for(int i=0;i<array.length-1;i++) {
			if(!array[i].equals(array[i+1])) {
//				bw.write("이쪽으로 옴???"+"\n");
				tmp = counting(array,i+1,1);
//				bw.write(String.valueOf(tmp)+"\n");
				if(max<tmp) {
					
					index =i+1;
					max=tmp;
					equal =false;
//					bw.write("일로와야지"+"\n"+"답은 : "+array[index]);
				} else if(array.length !=1 && max==tmp) {
//					System.out.println("일로언제옴?? i값: "+i+" max값 : "+max+" tmp값 "+tmp);
					equal =true;
				}
			}
		}
		if (equal==true) {
			bw.write("?");
		} else {
			bw.write(String.valueOf(array[index]));
		}
		
		br.close();
		bw.close();
	}

}
