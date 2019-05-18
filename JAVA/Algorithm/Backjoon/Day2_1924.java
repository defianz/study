package baekjoon;

import java.io.BufferedWriter;
import java.io.OutputStreamWriter;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.io.IOException;
import java.util.Calendar;
import java.util.Date;
import java.util.Scanner;

public class Day2_1924 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		int x = sc.nextInt();
		int y = sc.nextInt();
		String date1 = "2007-1-1";
		String date2 = "2007-"+x+"-"+y;
		SimpleDateFormat f = new SimpleDateFormat("yyyy-MM-dd");
		Date FirstDate = f.parse(date1);
		Date SecondDate = f.parse(date2);
		
		long calDate = FirstDate.getTime() - SecondDate.getTime();
		long calDateDays = calDate / (24*60*60*1000);
		calDateDays = Math.abs(calDateDays);
		int remain = (int) (calDateDays%7);
		switch(remain) {
		case 1: bw.write("TUE");
				break;
		case 2: bw.write("WED");
				break;
		case 3: bw.write("THU");
				break;
		case 4: bw.write("FRI");
				break;
		case 5: bw.write("SAT");
				break;
		case 6: bw.write("SUN");
				break;
		default : bw.write("MON");
		}
		bw.close();
		
	}

}
