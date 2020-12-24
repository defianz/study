package section4_2;

public class Circle extends Shape{
	public int radius;
	
	public Circle (int r ) {
		super("Circle");
		radius = r;
	}
	
	public double computeArea() {
		return Math.PI * radius * radius;
	}
	
	public double computePerimeter() {
		return 2.0 * Math.PI * radius;
	}
	
	public String toString() {
		return "Cricle : radius is " + radius;
	}
}
