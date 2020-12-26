package section6;

public class MySingleLinkedList<T> {

	
	public Node<T> head;
	public int size = 0;
	
	public MySingleLinkedList() {
		head = null;
		size = 0;
	}
	
	public void addFirst(T item) {
		Node<T> newNode = new Node<T>(item);
		newNode.next = head;
		head = newNode;
		size++;
		
	}
	
	public void addAfter(Node<T> before, T item) {
		Node<T> temp = new Node<>(item);
		temp.next = before.next;
		before.next = temp;
		size++;
	}
	
	public T removeFirst() {
		if(head == null)
			return null;
		T temp = head.data;
		head = head.next;
		return temp;
	}
	
	public T removeAfter(Node<T> before) {
		if(before.next == null)
			return null;
		T temp = before.next.data;
		before.next = before.next.next;
		size--;
		return temp;
		
	}
	
	public void add(int index, T item) { // insert
		if(index <0 || index > size)
			return;
		if(index == 0 )
			addFirst(item);
		else {
			Node<T> node = getNode(index-1);
			addAfter(node,item);
		}
	}
	
	public T remove(T item) { // remove
		Node<T> p = head, q= null;
		while(p != null && !p.data.equals(item)) {
			q = p;
			p = p.next;
		}
		if(p==null)
			return null;
		if(q==null)
			return removeFirst();
		return removeAfter(q);
		
	}
	
	public T get(int index) {
		if(index<0 || index > size)
			return null;
		return getNode(index).data;
	}
	
	public int indexof(T item) { // search
		
		Node<T> p = head;
		int index = 0;
		while(p.next != null) {
			if(p.data.equals(item))
				return index;
			p = p.next;
			index++;
		}
		return -1;
	}
	
	public Node<T> getNode(int index){
		if(index < 0 || index >= size)
			return null;
		Node<T> p = head;
		for (int i=0;i<index;i++) {
			p=p.next;
		}
		return p;
	}
	
	public static void main(String [] args) {
		MySingleLinkedList<String> list = new MySingleLinkedList<String>();
		list.add(0, "Saturday");
		list.add(1, "Friday");
		list.add(0, "Monday"); // M, S, F
		list.add(2, "Tuesday"); // M, S, T, F
		
		String str = list.get(2); // str= "Tuesday"
		list.remove("Tuesday"); // M,S,F
		
		int pos = list.indexof("Friday"); // pos = 2
	}
}
