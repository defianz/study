package section4_2;

import java.util.Scanner;
import section4_2.Rectangle;

public class ShapeApplication {
	
	private int capacity = 10;
	private Shape [] shapes = new Shape [capacity];
	private int n = 0;
	private Scanner kb = new Scanner(System.in);
	
	public void processCommand() {
		while(true) {
			System.out.println("$ ");
			String command = kb.next();
			if(command.equals("add"))
				handleAdd();
			else if (command.equals("show") || command.equals("showdetail"))
				handleShow( command.equals("showdetail"));
			else if (command.equals("sort"))
				bubbleSort(shapes, n);
			else if (command.equals("exit"))
				break;
		}
		kb.close();
	}
	
//	private void bubbleSort() {
//		for  (int i= n-1; i>0; i--) {
//			for(int j=0; j<i; j++) {
//				if  (shapes[j].computerArea() > shapes[j+1].computerArea()) {
//					Shape tmp = shapes[j];
//					shapes[j] = shapes[j+1];
//					shapes[j+1] = tmp;
//				}
//			}
//		}
//		
//	}
	
	private void bubbleSort(MyComparable [] data, int size) {
	for  (int i= n-1; i>0; i--) {
		for(int j=0; j<i; j++) {
			if  (data[j].compareTo(data[j+1]) > 0) {
				MyComparable tmp = data[j];
				data[j] = data[j+1];
				data[j+1] = tmp;
			}
		}
	}
	
}

	private void handleShow(boolean detailed) {
		for (int i=0; i<n; i++) {
			System.out.println( (i+1)+". "+ shapes[i].toString());
			if(detailed) {
				System.out.println("       The area is " + shapes[i].computeArea());
				System.out.println("       The perimeter is" + shapes[i].computePerimeter());
			}
		}
		
	}

	private void handleAdd() {
		String type = kb.next();
		switch(type) {
		case "R":
			addShape(new Rectangle(kb.nextInt(), kb.nextInt()));
			break;
		case "C":
			addShape(new Circle(kb.nextInt()));
			break;
		case "T":
			// ommited
		}
		
	}

	private void addShape(Shape shape) {
		shapes[n++] = shape;
	}

	public static void main(String [] args) {
		ShapeApplication app = new ShapeApplication();
		app.processCommand();
		
	}
	
}
