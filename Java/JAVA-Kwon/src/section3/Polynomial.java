package section3;

import java.util.Iterator;

import section3.MySingleLinkedList;

public class Polynomial {
	
	public char name;
	public MySingleLinkedList<Term> terms;
	
	public Polynomial(char name) {
		this.name = name;
		terms = new MySingleLinkedList<Term>();
		
	}
	
	public void addTerm(int coef, int expo) {
		if(coef==0)
			return;
		Node<Term> p = terms.head, q= null;
		while(p!=null && p.data.expo > expo) {
			q=p;
			p=p.next;
		}
		if( p!= null && p.data.expo == expo) {
			p.data.coef += coef;
			if(p.data.coef == 0) {
				if (q == null)
					terms.removeFirst();
				else
					terms.removeAfter(q);
			}
		} else {
			Term t = new Term(coef,expo);
			if(q==null)
				terms.addFirst(t);
			else
				terms.addAfter(q,t);
		}
			
	}
	
	public int calc (int x ) {
		int result = 0;
		
//		Node<Term> p = terms.head;
//		while( p != null) {
//			result += p.data.calc(x);
//			p=p.next;
//		}
		
		Iterator<Term> iter = terms.iterator();
		while(iter.hasNext()) {
			Term t = iter.next();
			result += t.calc(x);
		}
		return result;
	}
	
	public String toString() {
		String result = "";
		Iterator<Term> iter = terms.iterator();
		while ( iter.hasNext() ) {
			Term t = iter.next();
			result += ("+"+t.toString());
		}
		return result;
	}
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
