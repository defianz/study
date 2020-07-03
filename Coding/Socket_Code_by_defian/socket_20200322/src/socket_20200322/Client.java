package socket_20200322;

import java.net.Socket;

public class Client {
	public static void main(String args[]) {
		try {
			Socket client=new Socket("localhost",10002);
			System.out.println("접속성공!");
		}catch (Exception e) {
			// TODO: handle exception
		}

	}
}
