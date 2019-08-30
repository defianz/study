
public class Solution {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int[][] v = {{1, 4}, {3, 4}, {3, 10}};
		int[] answer = new int[2];
		
		for(int i=0; i<2; i++) {
            if (v[0][i] != v[1][i])         answer[i] = v[0][i] + v[1][i] - v[2][i];
            else if (v[1][i] != v[2][i])    answer[i] = v[1][i] + v[2][i] - v[0][i];
        }
		
		
		System.out.println(answer[0]+","+answer[1]);
	}

}
