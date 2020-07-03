package socket_20200321;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.net.Socket;
import java.util.Scanner;

public class Client {

	private Socket clientSocket;
	
	private DataInputStream dataInputStream;
	private DataOutputStream dataOutputStream;
	
	public void connect() {
		try {
			clientSocket = new Socket("localhost",10002);
			System.out.println("접속완료");
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
			boolean isThread = true;
			@Override
			public void run() {
				// TODO Auto-generated method stub
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
	
	
	public Client() {
		System.out.println("저는 클라이언트 입니다");
		connect();
		streamSetting();
		dataSend();
		dataRecv();
		
	}
	
	public static void main(String[] args) {
		new Client();
	}

}
