import java.util.Scanner;

class min_of_four {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int x = input.nextInt();
        int y = input.nextInt();
        int z = input.nextInt();
        int a = input.nextInt();

        int min = x;
        if(x + y + z + a == 0){
            min = x;    
            if(y < min)
                min = y;
            if(z < min)
                min = z;
            if(a < min)
                min = a;
            
            System.out.println(min);
        }

        input.close();
    }
}