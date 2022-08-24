import java.util.Scanner;

class digits_of_num {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int max = 1, n_copy = n;

        while(n != 0){
            n /= 10;
            max *= 10;
        }
    
        while(max != 1){
            max /= 10;
            int digit = (n_copy % (max * 10)) / max;
            System.out.print(digit + " ");
        }

        input.close();
    }
}