import java.util.Scanner;

class draw_home {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int width = input.nextInt();
        int height = width / 5;

        draw_roof(width);
        draw_line(width, '_', true);
        draw_side_wall(height,width);
        draw_line(width, '_', true);

   
        input.close();
    }

    public static void draw_line(int width,char symbol, boolean newline){
        for(int i = 0; i < width; ++i){
            System.out.print(symbol);
        }
        if (newline) System.out.println();
    }

    public static void draw_side_wall(int height, int width){
        for (int i = 0; i < height; ++i){
            System.out.println();
            System.out.print('|');
            draw_line(width - 2, ' ', false);
            System.out.println('|');
        }
    }

    public static void draw_roof(int width){
        for(int i = 1; i <= width; i+=2){
            draw_line((width - i) / 2, ' ', false);
            draw_line((i), '*', true);
        }
    }
}