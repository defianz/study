package inflearn_JAVA;

public class testVO {

	int va;
	
	public void setVa(int _va) {
		this.va=_va;
	}
	
	public int getVa() {
		return this.va;
	}
	
	public void method1() {
		System.out.println("메소드1입니다");
		this.method2();
	}
	
	public void method2() {
		System.out.println("메소드2입니다");

	}
}
