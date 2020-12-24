package section4;

public class OneDayEvent extends Event{
	
	public MyDate date;
	
	public OneDayEvent( String title, MyDate date) {
		super(title);
		this.date=date;
	}
	
	public boolean isRelevant(MyDate date) {
		if( this.date.year == date.year && this.date.month == date.month && this.date.day == date.day)
			return true;
		return false;
	}
	
	public String toString() {
		return title+", " + date.toString();
	}

	@Override
	public MyDate getRepresentativeDate() {
		return date;
	}
	
	
	
}
