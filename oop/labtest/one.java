import java.util.Scanner;

public class one {
  public static void main(String Arg[]) {
    Scanner call = new Scanner(System.in);

    System.out.println("Input Hr. :");
    int hr = call.nextInt();
    System.out.println("Input min. :");
    int min = call.nextInt();
    System.out.println("Input sec. :");
    int sec = call.nextInt();

    // Calculation
    int calHr = hr * 3600, calMin = min * 60;
    int total = calHr + calMin + sec;

    System.out.println("Input Time : " + hr + " hr. " + min + "min. " + sec + "sec.");
    System.out.println("Total time in sec. : " + total);
  }
}
