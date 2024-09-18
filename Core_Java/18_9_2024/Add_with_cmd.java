// Write a program to perform addition using command line Argument.

public class Add_with_cmd {
  public static void main(String[] args) {

    int num, add = 0;
    for (int i = 0; i < args.length; i++) {
      num = Integer.parseInt(args[i]);
      add += num;

    }

    System.err.println("Sum : " + add);
  }
}
