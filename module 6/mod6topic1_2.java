package ruetjavacode;

import java.util.Scanner;

public class mod6topic1_2 {

	public static void main(String[] args) {
		 int a = 0, b = 0;
		 Scanner input = new Scanner(System.in);
		 a = input.nextInt();
		 b = input.nextInt();
		 input.close();
		 if (a > b) {
		 System.out.println("The Bigger value is : " + a);
		 } else {
		 System.out.println("The Bigger Value is : " + b);
		 }}} 
