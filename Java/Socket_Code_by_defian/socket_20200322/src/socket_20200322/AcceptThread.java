package socket_20200322;

import java.net.ServerSocket;
import java.net.Socket;

public class AcceptThread implements Runnable{
	
	ServerSocket serverSocket;
	Socket client;
	
	public AcceptThread (ServerSocket serverSocket) {
		this.serverSocket=serverSocket;
	}

	@Override
	public void run() {
		// TODO Auto-generated method stub
		while(true) {
			try {
				client = serverSocket.accept();
				System.out.println("connected Cient"+client);
				
			}catch (Exception e) {
				// TODO: handle exception
			}
		}
	}
	
	
}
