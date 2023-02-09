package Lab04;

public class cBox extends shape {
  private double area, rad;

  public cBox(String inp) {
    rad = Double.parseDouble(inp);
  }

  public void calculateArea() {
    area = 3.14 * rad * rad;
    System.out.println("\nArea: " + area);
  }

  public static void main(String[] args) {
    shape fstShape = new cBox("20");
    fstShape.calculateArea();
    shape sndShape = new cBox("43");
    sndShape.calculateArea();
  }
}
