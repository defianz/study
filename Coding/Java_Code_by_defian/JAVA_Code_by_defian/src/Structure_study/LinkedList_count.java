package Structure_study;

public class LinkedList_count extends LinkedListdup{
	
	static class Reference {
		public int count =0;
	}
	
	
	private static Node KthToLast(Node n, int k, Reference r) {
		if(n==null) {
			return null;
		}
		
		Node found = KthToLast(n.next,k,r);
		r.count++;
		if(r.count ==k) {
			return n;
		}
		return found;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LinkedList_count ll = new LinkedList_count();
		ll.append(1);
		ll.append(2);
		ll.append(3);
		ll.append(4);
		ll.retrieve();
		int k =3;
		Reference r = new Reference();
		Node found = KthToLast(ll.getFirst(),k,r);
		System.out.println(found.data);
	}

	private Node getFirst() {
		// TODO Auto-generated method stub
		
		return this.header;
	}

}
