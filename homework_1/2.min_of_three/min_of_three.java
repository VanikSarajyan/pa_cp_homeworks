import java.util.Scanner;

class min_of_three {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int x = input.nextInt();
        int y = input.nextInt();
        int z = input.nextInt();

        int min = x;
        if(y < min)
            min = y;
        if(z < min)
            min = z;

        System.out.println(min);

        input.close();
    }
}