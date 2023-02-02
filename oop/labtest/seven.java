import java.util.Scanner;

public class seven {
  public static void main(String Arg[]) {
    Scanner call = new Scanner(System.in);

    System.out.println("Enter Number : ");
    int n = call.nextInt();
    String headLine = "";
    int cal = 0;

    for (int i = 0; i < n; i++) {
      int calI = i + 1;
      headLine = headLine + " + " + calI;
      cal = cal + calI;
    }

    System.out.println("Total Calculation of " + headLine + " = " + cal);
  }
}
