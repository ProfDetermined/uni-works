// No 38

public class LAB4 {
	public static void main(String[] args) {
		int dist = 450;

		int litre1 = 28;
		int litre2 = 35;
		int litre3 = 25;

		float hr1 = 5.25f;
		float hr2 = 4.66f;
		float hr3 = 5.62f;

		float gas1 = dist / litre1;
		float gas2 = dist / litre2;
		float gas3 = dist / litre3;

		float avSpd1 = dist / hr1;
		float avSpd2 = dist / hr2;
		float avSpd3 = dist / hr3;

		System.out.println("1st Fuel Consumption : " + gas1 + " km/litre");
		System.out.println("1st Avarage Speed : " + avSpd1 + " km/hr");

		System.out.println("");

		System.out.println("2nd Fuel Consumption : " + gas2 + " km/litre");
		System.out.println("2nd Avarage Speed : " + avSpd2 + " km/hr");
		
		System.out.println("");
		
		System.out.println("3rd Fuel Consumption : " + gas3 + " km/litre");
		System.out.println("3rd Avarage Speed : " + avSpd3 + " km/hr");
	}
}
