package client;

import java.io.IOException;
import java.io.InputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class MainCleint {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try {
			Socket c_socket = new Socket("192.168.35.106",8888);
			InputStream input_data = c_socket.getInputStream();
			
			byte[] receiveBuffer = new byte[100];
			input_data.read(receiveBuffer);
			
			System.out.println(new String(receiveBuffer));
			
			c_socket.close();
			
		} catch(IOException e) {
			e.printStackTrace();
		}
		
	}

}
