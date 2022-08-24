import java.util.Scanner;

class calculator {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int a = input.nextInt();
        int b = input.nextInt();

        int c = input.next().charAt(0);

        if (c == '+')
            System.out.println(a + b);
        else if (c == '-')
            System.out.println(a - b);
        else if (c == '*')
            System.out.println(a * b);
        else if (c == '/')
            System.out.println(a / b);
        
        input.close();
    }
}