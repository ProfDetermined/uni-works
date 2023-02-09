// No 38

import javax.swing.*;
import java.util.Scanner;

public class Lab01 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
    int menu = 0;
    float bal = 0;

    do {
      String depMenu;
      String title = "Money Management :D";
      String mainMenu = "Money Management :D\n 1. Withdraw\n 2. Deposit\n 3. Balance\n 4.Exit\n Please enter your number..\n";
      depMenu = JOptionPane.showInputDialog(null, mainMenu, title, JOptionPane.QUESTION_MESSAGE);
      menu = Integer.parseInt(depMenu);

      float tmpBal;

      if (menu == 1) {
        String depo = JOptionPane.showInputDialog(null, "Enter amount of money to deposit", title, JOptionPane.QUESTION_MESSAGE);
        tmpBal = Float.parseFloat(depo);
        bal += tmpBal;
      } else if (menu == 2) {
        String withd = JOptionPane.showInputDialog(null, "Enter amount of money to withdraw", title, JOptionPane.QUESTION_MESSAGE);
        tmpBal = Float.parseFloat(withd);
        
        if (tmpBal <= bal) {
          bal -= tmpBal;
        } else {
          JOptionPane.showMessageDialog(null, "Your money is not enough to withdraw", title, JOptionPane.WARNING_MESSAGE, null);
        }
      } else if (menu == 3) {
        JOptionPane.showMessageDialog(null, "Balance : " + bal + " THB", title, JOptionPane.INFORMATION_MESSAGE, null);
      }
      
    } while (menu != 4);
	}
}
