// Write a program to perform addition,subtraction, multiplication and division between two numbers using 3rd variable.

public class Arithmetic_Operations {
  public static void main(String[] args) {
    int num1 = 10, num2 = 20;
    int add = num1 + num2;
    System.err.println(num1 + " + " + num2 + " = " + add);

    int sub = num1 - num2;
    System.err.println(num1 + " - " + num2 + " = " + sub);
    int mul = num1 * num2;
    System.err.println(num1 + " * " + num2 + " = " + mul);
    int div = num1 / num2;
    System.err.println(num1 + " / " + num2 + " = " + div);
  }
}