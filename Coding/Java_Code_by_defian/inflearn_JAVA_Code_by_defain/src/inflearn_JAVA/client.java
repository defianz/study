package inflearn_JAVA;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;

public class client {
	
	public static void main(String args[]) {
		try {
			Socket socket = new Socket("127.0.0.1",33233);
			
			InputStream is = socket.getInputStream();
			OutputStream os= socket.getOutputStream();
			DataInputStream dis = new DataInputStream(is);
			DataOutputStream dos = new DataOutputStream(os);
			
			System.out.println(dis.readUTF());
			dos.writeUTF("2020-04-06 오늘 공부 끝");
			dis.close();
			dos.close();
			os.close();
			is.close();
			socket.close();
			
		} catch (Exception e) {
			// TODO: handle exception
		}	
	}

}
