package socket_20200321;

public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new Thread(new Runnable() {
			
			@Override
			public void run() {
				// TODO Auto-generated method stub
				try {
					new Server();
				}catch (Exception e) {
					
				}
			}
		}).start();
		
		new Thread(new Runnable() {
			
			@Override
			public void run() {
				// TODO Auto-generated method stub
				try {
					new Client();
				}catch (Exception e) {
					
				}
			}
		}).start();
		
		
	}

}
