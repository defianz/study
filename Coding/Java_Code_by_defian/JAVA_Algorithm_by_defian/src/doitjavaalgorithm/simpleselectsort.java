package doitjavaalgorithm;

public class simpleselectsort {
	
	static void swap(int[] array, int i, int j) {
		int tmp= array[i];
		array[i] = array[j];
		array[j] = tmp;
	}
	
	static void sssoring(int[] array) {
		int n = array.length;
		for (int i=0; i< n-1;i++) {
			int min = i;
			int tmp;
			for (int j=i+1; j<=n-1;j++) {
				if(array[min]>array[j]) min = j;
			}
			tmp = array[i]; 
			array[i] = array[min];
			array[min] = tmp;
			
		}
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] array = new int[]{22,5,11,32,120,68,70};
		sssoring(array);
		for(int n : array) System.out.println(n);
	}

}
