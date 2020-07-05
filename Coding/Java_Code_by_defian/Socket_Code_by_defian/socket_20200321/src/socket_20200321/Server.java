package socket_20200321;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

public class Server {
	
	
	private ServerSocket serverSocket;
	private Socket clientSocket;
	
	private DataInputStream dataInputStream;
	private DataOutputStream dataOutputStream;
	
	public void serverSetting() {
		try {
			serverSocket = new ServerSocket(10002);
			clientSocket = serverSocket.accept();
			System.out.println("클라이언트 소켓 연결");
	
			
		} catch (Exception e) {
			
		}
		
	}
	
	public void closeAll() {
		try {
			serverSocket.close();
			clientSocket.close();
			dataInputStream.close();
			dataOutputStream.close();
		} catch (Exception e) {
			System.out.println(e);
		}

		
	}
	
	public void streamSetting() {
		try {
			dataInputStream = new DataInputStream(clientSocket.getInputStream());
			dataOutputStream = new DataOutputStream(clientSocket.getOutputStream());	
		} catch (Exception e) {
		
		}

	}
	
	public void dataRecv() {
		new Thread(new Runnable() {
			boolean isThread=false;
			@Override
			public void run() {
				while(isThread) {
					try {
						String recData=dataInputStream.readUTF();
						if(recData.equals("/quit")) {
							isThread=false;
						} else {
							System.out.println(recData);
						}
						
					} catch (Exception e) {
						
					}
				}
			}
		}).start();
	}
	
	public void dataSend() {
		new Thread(new Runnable() {
			boolean isThread=true;
			Scanner in = new Scanner(System.in);
			@Override
			public void run() {
				// TODO Auto-generated method stub
				while(isThread) {
					try {
						String sendData=in.nextLine();
						if(sendData.equals("/quit")) {
							isThread=false;
						}else {
							dataOutputStream.writeUTF(sendData);
						}
					} catch (Exception e) {
						
					}
				}
				
			}
		}).start();
		
	}
	
	
	public Server() {
		// TODO Auto-generated method stub
		System.out.println("저는 서버입니다.");
		serverSetting();
		streamSetting();
		dataSend();
		dataRecv();
//		closeAll();
	}
	
	public static void main(String args[]) {
		new Server();
	}
	


}
