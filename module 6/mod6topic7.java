package ruetjavacode;

import java.util.Arrays;

public class mod6topic7 {
	public static int FindBig(int  ... ax) {
		int max = ax[2];
		for (int i = 0; i <  4; i++) {
			if (ax[i] > max)
				max = ax[i];
		}
		return max;
	}

	public static void main(String[] args) {
		int[] a = { 2, 3, 7, 1, 4, 9, 7 };
		System.out.println(Arrays.toString(a));
		System.out.println("The Big Value of First four numbers of the array is :" + FindBig(a));
	}
}
