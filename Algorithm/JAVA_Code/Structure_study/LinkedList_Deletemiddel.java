package Structure_study;

public class LinkedList_Deletemiddel extends LinkedList_count {
	
	private static boolean deleteNode(Node n) {
	if(n==null || n.next == null) {
		return false;
	}
	Node next =n.next;
	n.data = next.data;
	n.next = next.next;
	return true;
	}
	
	public Node get(int d) {
		Node n = this.header;
		for(int i=0; i<d;i++) {
			n=n.next;
		}
		return n;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LinkedList_Deletemiddel ll = new LinkedList_Deletemiddel();
		ll.append(1);
		ll.append(2);
		ll.append(3);
		ll.append(4);
		ll.retrieve();
		deleteNode(ll.get(2));
		ll.retrieve();
		
	}

}
