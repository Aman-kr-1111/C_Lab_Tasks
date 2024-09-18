// Write a program to find out the area of circle by taking the value from Command line arguments.

public class Area_of_Circle_cmd {
  public static void main(String[] args) {

    float radius = Integer.parseInt(args[0]);

    float area = 3.14F * radius * radius;

    System.err.println("Area of circle : " + area);
  }
}
