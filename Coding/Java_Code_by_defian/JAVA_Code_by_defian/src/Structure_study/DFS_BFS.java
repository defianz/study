package Structure_study;
import java.util.Stack;
import java.util.LinkedList;


class graph extends Queue{
	class Node{
		int data;
		LinkedList<Node> adjacent;
		boolean marked;
		Node (int data){
			this .data= data;
			this.marked = false;
			adjacent =new LinkedList<Node>();
		}
	}
	
	Node[] nodes;
	graph(int size){
		nodes = new Node[size];
		for (int i = 0; i< size; i++) {
			nodes[i]= new Node(i);
		}
	}
	void addEdge(int i1, int i2) {
		Node n1 = nodes[i1];
		Node n2 = nodes[i2];
		if ( !n1.adjacent.contains(n2)) {
			n1.adjacent.add(n2);
		}
		if ( !n2.adjacent.contains(n1)) {
			n2.adjacent.add(n1);
		}
		
	}
	
	void dfs(){
		dfs(0);
	}
	
	void dfs(int d) {
		Node root = nodes[d];
		Stack<Node> st= new Stack<Node>();
		st.push(root);
		root.marked = true;
		while (!st.isEmpty()) {
			Node r = st.pop();
			for (Node n : r.adjacent) {
				if(n.marked == false) {
					n.marked =true;
					st.push(n);
				}			
			}
			visit(r);
		}
	}
	void bfs() {
		bfs(0);
	}
	void bfs(int d) {
		Node root = nodes[d];
		Queue<Node> queue = new Queue<Node>();
		queue.add(root);
		root.marked= true;
		
		while (!queue.isEmptry()) {
			Node r = queue.remove();
			for (Node n : r.adjacent) {
				if(n.marked ==false) {
					n.marked =true;
					queue.add(n);
				}
			}
			visit(r);
		}
	}
	
	void visit(Node n) {
		System.out.print(n.data + " ");
	}
	
	void dfsR() {
		dfsR(0);
	}
	
	
	void dfsR(Node r) {
		if (r == null) return;
		r.marked = true;
		visit(r);
		for (Node n : r.adjacent) {
			if(n.marked==false) {
				dfsR(n);
			}
		}
	}
	void dfsR(int index) {
		Node r = nodes[index];
		dfsR(r);
	}
	
}


public class DFS_BFS extends queue_test {
	
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		graph g = new graph(9);
		g.addEdge(0, 1);
		g.addEdge(1, 2);
		g.addEdge(1, 3);
		g.addEdge(2, 4);
		g.addEdge(2, 3);
		g.addEdge(3, 4);
		g.addEdge(3, 5);
		g.addEdge(5, 6);
		g.addEdge(5, 7);
		g.addEdge(6, 8); 
		
		g.dfs(3);
	}

}
