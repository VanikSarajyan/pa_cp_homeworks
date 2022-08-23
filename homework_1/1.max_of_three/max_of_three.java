import java.util.Scanner;

class max_of_three {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int x = input.nextInt();
        int y = input.nextInt();
        int z = input.nextInt();

        int max = x;
        if(y > max)
            max = y;
        if(z > max)
            max = z;

        System.out.println(max);

        input.close();
    }
}