import java.util.Scanner;

class draw_triangle {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int side = input.nextInt();

        for(int i = 1; i < side + 1; ++i){
            for(int j = 0; j < i; ++j){
                System.out.print("*");
            }
            System.out.println();
        }
   
        input.close();
    }
}