package module7;

interface AI {
	public void printA();
}

interface BI {
	public void printB();
}

interface CI {
	public void printC();
}

class AA implements AI {
	public void printA() {
		System.out.println("Print of class A");
	}
}

class BB extends AA implements BI {
	public void printB() {
		System.out.println("Print class of B");
	}
}

class CC extends BB implements CI {
	public void printC() {
		System.out.println("Print class of B");
	}
}

public class topic2 {
	public static void main(String[] args) {
		CC test = new CC();
		test.printA();
		test.printB();
		test.printC();
	}
}
