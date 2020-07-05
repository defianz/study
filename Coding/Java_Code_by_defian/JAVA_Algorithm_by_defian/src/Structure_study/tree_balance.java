package Structure_study;


class tree2 {
	class Node{
		int data;
		Node left;
		Node right;
		Node (int data){
			this.data =data;
		}
	}
	Node root;
	tree2(int size){
		root = makeBST(0,size-1);
		root.right.right.right.right = new Node(10);
		root.right.right.left = new Node(11);
	}
	
	Node makeBST(int start, int end) {
		if(start >end) return null;
		int mid = (start + end) /2;
		Node node = new Node(mid);
		node.left = makeBST(start,mid-1);
		node.right = makeBST(mid+1,end);
		return node;
	}
	boolean isBalanced(Node root) {
		if (root == null ) return true;
		int heightDiff = getHeight(root.left) - getHeight(root.right); 
		if (Math.abs(heightDiff) >1 ) {
			return false;
		}else {
			return isBalanced(root.left) && isBalanced(root.right); 
		}
	}
	int getHeight(Node root) {
		if(root==null) return -1;
		return Math.max(getHeight(root.left), getHeight(root.right))+1; 
	}
	int checkHeight(Node root) {
		if (root == null ) return -1;
		int leftHeight = checkHeight(root.left);
		if (leftHeight == Integer.MIN_VALUE) return Integer.MIN_VALUE;
		int rightHeight = checkHeight(root.right);
		if (rightHeight == Integer.MIN_VALUE) return Integer.MIN_VALUE;
		int heightDiff = leftHeight - rightHeight;
		if (Math.abs(heightDiff) >1 ) {
			return Integer.MIN_VALUE;
		} else {
			return Math.max(leftHeight, rightHeight) +1;
		}
	}
	boolean isBalanced2 (Node root) {
		return checkHeight(root) != Integer.MIN_VALUE;
	}
	class Level {
		int min = Integer.MAX_VALUE;
		int max = Integer.MIN_VALUE;
	}
	boolean isBalanced3(Node root) {
		Level obj = new Level();
		checkBalanced(root, obj, 0);
		if(Math.abs(obj.min-obj.max)>1) return false;
		else return true;
	}
	void checkBalanced(Node node, Level obj, int level) {
		if (node == null) {
			if (level < obj.min) obj.min = level;
			else if (level > obj.max) obj.max = level;
			return;
		}
		checkBalanced(node.left, obj, level +1);
		checkBalanced(node.right, obj, level +1);
	}
}



public class tree_balance {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		tree2 t = new tree2(10);
		System.out.println(t.isBalanced(t.root));
		System.out.println(t.isBalanced2(t.root));
		System.out.println(t.isBalanced3(t.root));

	}

}
