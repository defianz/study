package socket_20200322;

import java.net.ServerSocket;

public class Server {
	
	public static void main(String ags[]) {
		try {
			System.out.println("접속을 기다립니다");
			ServerSocket serverSocket = new ServerSocket(10002);
			AcceptThread acceptThread = new AcceptThread(serverSocket);
			
			new Thread(acceptThread).start();
			
			System.out.println("내가 바로 서버다");
			
		}catch (Exception e) {
			// TODO: handle exception
		}
	}
}
