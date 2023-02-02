import java.util.Scanner;

public class eight {
  public static void main(String Arg[]) {
    Scanner call = new Scanner(System.in);

    System.out.println("Enter the Number : ");
    int inpNo = call.nextInt();

    System.out.println("Only odd[O], Only Even[E] or All[A] : ");
    String check = call.next();
    String oea = check;

    if (oea != "") {
      if (oea == "O" || oea == "o") {
        int[] closet = { 1, 3, 5, 7, 9, 11 };
        for (int i = 0; i < 6; i++) {
          System.out.println(inpNo + " x " + closet[i] + " = " + (inpNo * closet[i]));
        }
      } else if (oea == "E" || oea == "e") {
        int[] closet = { 1, 3, 5, 7, 9, 11 };
        for (int i = 0; i < 6; i++) {
          System.out.println(inpNo + " x " + (closet[i] + 1) + " = " + (inpNo * (closet[i] + 1)));
        }
      } else if (oea == "A" || oea == "a") {
        for (int i = 0; i < 12; i++) {
          System.out.println(inpNo + " x " + (i + 1) + " = " + (inpNo * (i + 1)));
        }
      } else {
        System.out.println("idk : " + oea + " suspect");
      }
    } else {
      System.out.println("System Error");
    }
  }
}