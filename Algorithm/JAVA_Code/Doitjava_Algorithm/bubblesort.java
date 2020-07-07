package doitjavaalgorithm;


public class bubblesort {
	
	static void bubblesoring(int[] array) {
		int n = array.length;
		
		for (int i =0; i <n-1 ; i++) {
			int exchange =0;
			for ( int j = n-1; j >i ; j-- ) {
				int tmp;
				if ( array[j] < array[j-1] ) {
					tmp = array[j-1];
					array[j-1] = array[j];
					array[j] = tmp;
					exchange ++;
				}
			}
			System.out.println("exchange is : " + exchange );
			if(exchange ==0) return;
		}
	}
	
	public static void main(String[] args) {
	int[] array = new int[]{22,5,11,32,120,68,70};
	bubblesort.bubblesoring(array);
	for(int n : array) System.out.println(n);
	
		
	}
}
