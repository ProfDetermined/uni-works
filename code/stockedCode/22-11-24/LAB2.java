// No 38

public class LAB2 {
	public static void main(String[] args) {
		int rad1 = 5;
		float rad2 = 3.7f;
		float rad3 = 325.399f;
		
		float pi = 3.14159f;

		float circum1 = 2 * pi * rad1;
		float circum2 = 2 * pi * rad2;
		float circum3 = 2 * pi * rad3;

		float area1 = pi * rad1 * rad1;
		float area2 = pi * rad2 * rad2;
		float area3 = pi * rad3 * rad3;

		System.out.println("Area of Circle 1 == " + area1);
		System.out.println("Circumference of Circle 1 == " + circum1);

		System.out.println("");

		System.out.println("Area of Circle 2 == " + area2);
		System.out.println("Circumference of Circle 2 == " + circum2);

		System.out.println("");

		System.out.println("Area of Circle 3 == " + area3);
		System.out.println("Circumference of Circle 3 == " + circum3);
	}
}
