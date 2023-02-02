import java.util.Scanner;

public class two {
  public static void main(String Arg[]) {
    Scanner call = new Scanner(System.in);

    System.out.println("Input radius :");
    int rad = call.nextInt();

    // Constant
    double pi = 3.14;

    // Calculation
    double area = pi * (rad * rad);
    double circleLine = 2 * pi * rad;

    System.out.println("Area : " + area);
    System.out.println("Circle Line : " + circleLine);
  }
}