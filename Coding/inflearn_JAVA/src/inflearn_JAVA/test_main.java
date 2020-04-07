package inflearn_JAVA;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class test_main {
	
//	public int plus(int a, int b) {
//		int res;
//		res = a+ b;
//		
//		return res;
//	}
	
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
//		SYSTEM.OUT.PRINTLN(APPLICANT.PLSS(10,5));
//		
//		SYSTEM.OUT.PRINTF("%S","HELLO WORLD\N");
//		SYSTEM.OUT.PRINTLN("HELLO WORLD");
//		SYSTEM.OUT.PRINTF("%D", 100%3);
//		int[] a = null;
//		System.out.println(a);
//		a= new int[5];
//		System.out.println(a);
//		System.out.println(a[0]);
//		a[0]=5;
//		System.out.println(a[0]);
//		int a =5;
//		int b= 5;
//		String str1 = new String("hi");
//		String str2= new String("hi");
//		System.out.println(a==b);
//		
//		System.out.println(str1==str2);
//		System.out.println(str1.equals(str2));
		
//		testVO c1 = new testVO();
//		c1.va = 100;
//		System.out.println(c1.va);
//		
//		c1.method1();
//		c1.method2();
//		
//		int[] c2 = new int[5];
//		
//		try {
//			BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//			int kor1,kor2,kor3;
//			int eng1,eng2,eng3;
//			int mat1,mat2,mat3;
//			
//			System.out.println();
//			
//		} catch (Exception e) {
//			// TODO: handle exception
//		}
//		
//		
//		
//		System.out.println(Integer.MAX_VALUE);
//		System.out.println(Integer.MIN_VALUE);
//		System.out.println(Float.MAX_VALUE);
//		System.out.println(Float.MIN_VALUE);
//		
//		Integer intClass = new Integer(100);
//		int intValue = intClass.intValue();
//		System.out.println(intValue);
//		Runtime run = Runtime.getRuntime();
//		try {
////			run.exec("explorer.exe http://www.naver.com");
//		} catch (Exception e) {
//			// TODO: handle exception
//		}
//		System.out.println(run.totalMemory());
//		
//		
//		String str1 = "이건 뭐지";
//		String str2 = "이건 뭐지";
//		String str3 = new String("이건 뭐지");
//		if(str1==str3) {
//			System.out.println("같음");
//		} else {
//			System.out.println("다름");
//		}
//		
//		String str = "동해물과 백두산이 마르고 닳도록";
//		StringTokenizer st = new StringTokenizer(str);
//		
//		while (st.hasMoreElements()) {
//			System.out.println(st.nextElement());
//			System.out.println(st.nextToken());
//			
//		}
//		System.out.println("----------------------");
//		st=new StringTokenizer(str);
//		while (st.hasMoreElements()) {
//			System.out.println(st.nextToken("산"));
//			
//		}
//		System.out.println("----------------------");
//		str = "동^해_물과^_백두_산_이 마르고 닳_도록";
//		st = new StringTokenizer(str,"_");
//		while(st.hasMoreElements()) {
//			System.out.println(st.nextToken("^"));
//		}
//		
//		System.out.println("----------------------");
//		str = "동^해_물과^_백두_산_이 마르고 닳_도록";
//		st = new StringTokenizer(str,"_",true);
//		while(st.hasMoreElements()) {
//			System.out.println(st.nextToken());
//		}
		
//		Date d1 = new Date();
//		System.out.println("현재시간 : " + d1);
//		Date d2 = new Date(1125034805687L);
//		System.out.println("지정한시간 : " + d2);
//		Date d3 = new Date(0L);
//		System.out.println("0L : " + d3);
//		Date d4 = new Date(System.currentTimeMillis());
//		System.out.println("현재시간 : " + d4);
//		
//		Calendar c = Calendar.getInstance();
//		
//		Date d = c.getTime();
//		
//		
//		int year = d1.getYear() + 1900;
//		System.out.println(year);
//		int month = d1.getMonth()+1;
//		int day = d1.getDay();
//		int hours = d1.getHours();
//		int minit
//		
//		Vector v1 = new Vector();
//		v1.addElement("안녕하세요");
//		v1.addElement("반갑습니다");
//		v1.addElement("안반가운데..");
//		System.out.println(v1.size());
//		for(int i=0; i< v1.size();i++) {
//			String str = (String)v1.elementAt(i);
//			System.out.println(str);
//		}
//		Vector v2 = new Vector();
//		v2.addElement(new Integer(10));
//		v2.addElement(new Integer(20));
//		v2.addElement(new Integer(30));
//		for(int i=0;i<v2.size();i++) {
//			System.out.printf("%d ", v2.elementAt(i));
//		}
//		
//		Vector<String> v3 = new Vector<String>();
//		v3.addElement("ㅡ.ㅡ");
//		v3.addElement("문자다");
//		
//		for(int i=0;i<v3.size();i++) {
//			String str = v3.elementAt(i);
//			System.out.println(str);
//		}
//		Vector<int> v4 = new Vector<int> ();
//		v4.addElement(5);
//		v4.addElement(100.00);
//		for(int i=0;i<v4.size();i++) {
////			double str = v4.elementAt(i);
//			System.out.println(str);
//		}
//		Hashtable ht = new Hashtable();
//		ht.put("형철", "hi");
//		ht.put("int",100);
//		
//		String str = (String)ht.get("형철");
//		System.out.println(str);
//		System.out.println(ht.get("int"));
//		try {
//			String fileName ="C:\\test\\a.txt";
//			
//			FileOutputStream fos = new FileOutputStream(fileName);
//			byte[] data = "안녕하세요".getBytes();
//			fos.write(data);
//			fos.flush();
//			fos.close();
//			System.out.println("파일쓰기 성공");
//		} catch (Exception e) {
//			// TODO: handle exception
//		}
//		try {
//			String fileName="C:\\test\\a.txt";
//			FileInputStream fis = new FileInputStream(fileName);
//			byte[] buf = new byte[fis.available()];
//			fis.read(buf);
//			fis.close();
//			String str = new String(buf);
//			System.out.println(str);
//		} catch (Exception e) {
//			// TODO: handle exception
//		}
//		try {
//			String fileName = "C:\\test\\b.txt";
//			FileOutputStream fos = new FileOutputStream(fileName);
//			DataOutputStream dos = new DataOutputStream(fos);
//			
//			dos.writeUTF("안녕하세요");
//			dos.writeInt(4);
//			dos.write(20);
//			dos.flush();
//			dos.close();
//			fos.close();
//			System.out.println("출력완료");
//			
//		} catch (Exception e) {
//			// TODO: handle exception
//		}
//		try {
//			String fileName = "C:\\test\\b.txt";
//			FileInputStream fis = new FileInputStream(fileName);
//			DataInputStream dis = new DataInputStream(fis);
//			
//			String str = dis.readUTF();
//			int a = dis.readInt();
//			int b = dis.read();
//			System.out.println(str);
//			System.out.println(a);
//			System.out.println(b);
//			
//			
//		} catch (Exception e) {
//			// TODO: handle exception
//		}
		
//		try {
//			OutputStreamWriter osw = new OutputStreamWriter(System.out);
//			BufferedWriter bw = new BufferedWriter(osw);
//			PrintWriter pw = new PrintWriter(bw);
//			pw.println("안녕하세요");
//			pw.println("반갑습니다");
//			pw.flush();
//			pw.close();
//			bw.close();
//			osw.close();
//			
//			File file = new File("C:\\test\\c.txt");
//			FileWriter fw = new FileWriter(file);
//			BufferedWriter bw = new BufferedWriter(fw);
//			PrintWriter pw = new PrintWriter(bw);
//			
//			pw.println("안녕하세요:");
//			pw.flush();
//			pw.close();
//			bw.close();
//			fw.close();
//			
//			
//		} catch (Exception e) {
//			// TODO: handle exception
//		}
		try {
			ServerSocket server = new ServerSocket(33233);
			System.out.println("다들 화이팅입니다~");
			Socket socket = server.accept();
			
			InputStream is = socket.getInputStream();
			OutputStream os= socket.getOutputStream();
			DataInputStream dis = new DataInputStream(is);
			DataOutputStream dos = new DataOutputStream(os);
			
			dos.writeUTF("서버의 메시지 입니다");
			String recData = dis.readUTF();
			System.out.println(recData);
			socket.close();
			server.close();
			
		} catch (Exception e) {
			// TODO: handle exception
		}
	}

}

//class Applicant {
//	int a,b;
//
//	
//	public static int plss(int a, int b) {
//		int res;
//		res = a + b;
//		
//		return res;
//	}
//}
