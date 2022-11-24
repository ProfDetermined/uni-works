// No 38

public class LAB3 {
	public static void main(String[] args) {
		final double VAT_RATE = 0.07f;

		int price1 = 19900;
		int price2 = 18900;
		int price3 = 7990;

		float price1vat = (float) (price1 * VAT_RATE);
		float price2vat = (float) (price2 * VAT_RATE);
		float price3vat = (float) (price3 * VAT_RATE);

		float price1Total = price1 + price1vat;
		float price2Total = price2 + price1vat;
		float price3Total = price3 + price1vat;

		System.out.println("TV Price == " + price1);
		System.out.println("TV VAT == " + price1vat);
		System.out.println("TV Total == " + price1Total);

		System.out.println("");
		
		System.out.println("Computer Price == " + price2);
		System.out.println("Computer VAT == " + price2vat);
		System.out.println("Computer Total == " + price2Total);

		System.out.println("");

		System.out.println("Phone Price == " + price3);
		System.out.println("Phone VAT == " + price3vat);
		System.out.println("Phone Total == " + price3Total);
	}
}
