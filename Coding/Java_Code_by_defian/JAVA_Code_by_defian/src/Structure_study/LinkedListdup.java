package Structure_study;

public class LinkedListdup extends LinkedList{
	
	void removeDups() {
		Node n = header;
		while(n.next != null) {
			Node r = n;
			while(r.next != null) {
				if(n.data == r.next.data) {
					r.next = r.next.next;
				}else {
					r=r.next;
				}
			}
			n = n.next;
		}
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LinkedListdup ll = new LinkedListdup();
		ll.append(2);
		ll.append(1);
		ll.append(2);
		ll.append(3);
		ll.append(4);
		ll.append(3);
		ll.append(2);
		ll.append(2);
		ll.retrieve();
		ll.removeDups();
		ll.retrieve();

	}

}
