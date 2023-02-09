package Lab04;

public class sqBox extends shape {
  private double area, side;

  public sqBox(String inp) {
    side = Double.parseDouble(inp);
  }

  public void calculateArea() {
    area = side * side;
    System.out.println("\nArea: " + area);
  }

  public static void main(String[] args) {
    shape fstShape = new sqBox("20");
    fstShape.calculateArea();
    shape sndShape = new cBox("43");
    sndShape.calculateArea();
  }
}
