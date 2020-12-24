package section4;

public abstract class Event implements Comparable{
	public String title;
	public Event(String title) {
		this.title = title;
	}
	
	public abstract boolean isRelevant(MyDate date) ;
	public abstract MyDate getRepresentativeDate();
	
	public int compareTo(Object other) {
		MyDate mine = getRepresentativeDate();
		MyDate yours = ((Event)other).getRepresentativeDate();
		return mine.compareTo(yours);
	}
}
