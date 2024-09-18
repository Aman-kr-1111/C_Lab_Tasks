// Write a program to swap to numbers without using 3rd variable using command line argument.

public class Swap_cmd {
  public static void main(String[] args) {
    int num1 = Integer.parseInt(args[0]);
    int num2 = Integer.parseInt(args[1]);
    System.out.println("Before swapping!!!");
    System.out.println("num1 = " + num1 + " and num2 = " + num2);

    num1 += num2;
    num2 = num1 - num2;
    num1 -= num2;

    System.out.println("\nAfter swapping!!!");
    System.out.println("num1 = " + num1 + " and num2 = " + num2);
  }
}
