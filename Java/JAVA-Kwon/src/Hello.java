import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;



public class Hello {

	public static void swap(int[] arr, int a,int b) {
		int tmp = arr[a];
		arr[a] = arr[b];
		arr[b] = tmp; 
	}

	public static void main(String[] args) throws IOException {
		Scanner kb =  new Scanner(System.in);
		int n = kb.nextInt();
		int[] inp = new int[n];
		for(int i=0;i<n;i++) {
			inp[i]=kb.nextInt();
		}
		kb.close();
		
		for(int i=n-1; i>0; i--) {
			for(int j=0; j<i;j++) {
				if(inp[j]<inp[j+1]) swap(inp,j,j+1);
			}
		}
		for(int i=0;i<n;i++) {
		System.out.println(inp[i]);
		}
	}

}

