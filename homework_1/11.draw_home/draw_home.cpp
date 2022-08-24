#include <iostream>
using namespace std;

void draw_line(int width, char symbol, bool newline){
    for(int i = 0; i < width; ++i){
        cout << symbol;
    }
    if (newline) cout << endl;
}

void draw_side_wall(int height, int width){
    for (int i = 0; i < height; ++i){
        cout << endl << '|';
        draw_line(width - 2, ' ', false);
        cout << '|' << endl;
    }
}

void draw_roof(int width){
    for(int i = 1; i <= width; i+=2){
        draw_line((width - i) / 2, ' ', false);
        draw_line((i), '*', true);
    }
}

int main() {
    int width, height;
    cin >> width;

    height = width / 5;

    draw_roof(width);
    draw_line(width, '_', true);
    draw_side_wall(height,width);
    draw_line(width, '_', true);
    return 0;
}