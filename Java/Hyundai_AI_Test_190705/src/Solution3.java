import java.util.Arrays;

public class Solution3 {
	static boolean answer = false;
	
    static void dfs(int[] arr, int k, int n) {
    if(k==arr.length) {
        return;
    } else {
        for(int i=k+1; i<arr.length; i++) {
            if(arr[k] + arr[i] == n) {
                answer = true;
                return;
            }
        }
        if(k != arr.length-1) {
        	 k = k+1;
        	 while(arr[k] == arr[k-1]){
             	if(k!=arr.length) {
             		k = k+1;	
             	}
             }
             dfs(arr,k,n);
        }
        
    }
    }
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int[] arr = {5,3,9,13};
		int n = 7;
		
		Arrays.sort(arr);
		
		
		dfs(arr,0,n);
		System.out.println(answer);
	}

}
