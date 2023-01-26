// No 38

import java.util.Scanner;

public class Lab2 {
	String name, position;
	int OT;
	Double salary, rate;

	static double calBill(double salary, double rate, int OT) {
		return salary + (rate * OT);
	}

	static void showDetail(String name, String position, double salary, double totalSalary) {
		System.out.println("Name: " + name);
		System.out.println("Position: " + position);
		System.out.println("Salary: " + salary);
		System.out.println("Total Salary: " + totalSalary);
	}

	public static void main(String[] args) {
		Scanner inp = new Scanner(System.in);
		Lab2 employee = new Lab2();

		System.out.println("Enter Name: ");
    String nameInp = inp.nextLine();
		employee.name = nameInp;

		System.out.println("Enter Position: ");
		String posIn = inp.nextLine();
		employee.position = posIn;

		System.out.println("Enter Salary: ");
		String salIn = inp.nextLine();
		employee.salary = Double.parseDouble(salIn);

		System.out.println("Enter OT Rate: ");
		String rateIn = inp.nextLine();
		employee.rate = Double.parseDouble(rateIn);

		System.out.println("Enter OT Time: ");
		String timeIn = inp.nextLine();
		employee.OT = Integer.parseInt(timeIn);

		Double salaryTotal = calBill(employee.salary, employee.rate, employee.OT);

		System.out.println("");
		System.out.println("");
		System.out.println("====================================================");
		showDetail(employee.name, employee.position, employee.salary, salaryTotal);
	}
}
