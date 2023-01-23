package ruetjavacode;

public class mod6topic5 {
	public static void main(String[] args) {
		Display();
	}

	private static void Display() {
		System.out.println("hi");
		String s = "kire";
		String a = "         beta";
		int k = s.compareTo(a);
		int p = a.compareTo(s);
		System.out.println(k);
		System.out.println(p);
		System.out.println(s.concat(a));
		System.out.println(s.equals(a));
		System.out.println(a.length());
		System.out.println(a.replace('a', 'b'));
		System.out.print(a);
		for (int i = 0; i <= s.length(); i++) {
			System.out.println(s.substring(0, i));
		}
		System.out.println(a.trim());

	}
}
