package baekjoon;

import java.io.BufferedWriter;
import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.Iterator;

class Day1_inputoutput {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bf = new BufferedWriter(new OutputStreamWriter(System.out));
		
		ArrayList<String> mlist = new ArrayList<String>();
		String s = "";
		
		while((s=bi.readLine()) != null && s.length() != 0) {
			mlist.add(s);
		}
		bi.close();
		
		Iterator<String> it1 = mlist.iterator();
		while(it1.hasNext()) {
			bf.write(it1.next()+"\n");
		}
		bf.close();
		
	}

}
