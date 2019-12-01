package Structure_study;
import java.util.ArrayList;
import java.util.LinkedList;

class graph3{
	class Node{
		int data;
		Node left;
		Node right;
		
		Node(int data){
			this.data = data;
		}
	}
	

	
	private Node root;
	graph3(int size){
		root = makeBST(0,size-1);
	}
	
	Node makeBST(int start,int end) {
		if (start >end ) return null;
		int mid = (start+end)/2;
		Node node = new Node(mid);
		node.left = makeBST(start,mid-1);
		node.right =makeBST(mid+1,end);
		return node;
	}
	ArrayList<LinkedList<Node>> BSTToList(){
		ArrayList<LinkedList<Node>> lists = new ArrayList<LinkedList<Node>>();
		BSTtoList(root,lists,0);
		return lists;
	}
	void BSTtoList(Node root, ArrayList<LinkedList<Node>> lists, int level) {
		if (root == null ) return;
		LinkedList<Node> list = null;
		if (lists.size() == level){
			list = new LinkedList<Node>();
			lists.add(list);
		}else {
			list = lists.get(level);
		}
		list.add(root);
		BSTtoList(root.left,lists,level+1);
		BSTtoList(root.right,lists,level+1);
		
	}
	
	ArrayList<LinkedList<Node>> BSTtoList2(){
		ArrayList<LinkedList<Node>> result = new ArrayList<LinkedList<Node>>();
		LinkedList<Node> current = new LinkedList<Node>();
		if(root != null){
			current.add(root);
		}
		while (current.size() >0 ) {
			result.add(current);
			LinkedList<Node> parents = current;
			current = new LinkedList<Node>();
			for (Node parent : parents) {
				if ( parent.left != null ) current.add(parent.left);
				if ( parent.right != null ) current.add(parent.right);
			}
		}
		return result;
	}
	void printList(ArrayList<LinkedList<Node>> arr) {
		for(LinkedList<Node> list : arr) {
			for (Node node : list) {
				System.out.print(node.data + " ");
			}
			System.out.println();
		}
	}
	
}

public class tree_problem1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		graph3 t = new graph3(10);
		t.printList(t.BSTtoList2());
	}

}
