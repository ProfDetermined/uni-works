// No 38

import java.util.Scanner;

public class main {
	public static void main(String[] args) {
		Scanner inp = new Scanner(System.in);
    System.out.println("Enter your Number : ");

    String inpIn = inp.nextLine();
		int inpNumber = Integer.parseInt(inpIn);

		if(inpNumber < 2) {
			System.out.println("Invalid Number :(");
		} else {
			System.out.println("");
			System.out.println("/==========================/");
			System.out.println("");

			for (int i=2; i<=inpNumber; i++) {
				for (int j=1; j<13; j++) {
					System.out.println(i + "x" + j + "=" + (i*j));
				}
			System.out.println("");
			System.out.println("/==========================/");
		}
		}
	}
}