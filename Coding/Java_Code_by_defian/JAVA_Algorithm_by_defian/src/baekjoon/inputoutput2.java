package baekjoon;

import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;


public class inputoutput2 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		ArrayList<String> mlist = new ArrayList<String>();
		String s = null;
		while((s=br.readLine()) != null) {
						mlist.add(s);
		}
		br.close();
		
		Iterator<String> it1 = mlist.iterator();
		while(it1.hasNext()) {
			bw.write(it1.next()+"\n");
		}
		bw.close();
	}

}
