// Write a Java program to calculate the factorial of a number where number must be taken from command line argument.

public class Factorial_cmd {
  public static void main(String[] args) {
    int num = Integer.parseInt(args[0]);

    int fact = 1;
    for (int i = 1; i <= num; i++) {
      fact *= i;
    }
    
    System.out.println("Factorial of " + num + " is : " + fact);
  }
}
