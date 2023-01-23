package ruetjavacode;

import java.util.*;
import java.util.ArrayList;

public class Mod6topic8 {
	// private static final int INT_MAX = 0;

	public static void main(String[] args) {
		ArrayList<Integer> sc = new ArrayList<Integer>();
		sc.add(10);
		sc.add(50);
		sc.add(70);
		sc.add(30);
		sc.add(1, 60);
		System.out.println(sc.get(2));

		sc.remove(3);
		System.out.print(sc);

		sc.remove(Integer.valueOf(10));
		System.out.print(sc);

		Collections.sort(sc);
		System.out.print(sc);

		sc.clear();
		System.out.print(sc);
		
	}}

