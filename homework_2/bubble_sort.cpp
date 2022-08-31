#include <iostream>

void bubble_sort(int a[], int size){
    for (int i = 0; i < size; ++i){
        bool swapped = false;
        for(int j = 0; j < size - 1 - i; ++j){
            if(a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            return;
        }
    }
}

int main() {

    int size;
    std::cin >> size;

    int a[size];
    for(int i = 0; i < size; ++i){
        std::cin >> a[i];
    }

    bubble_sort(a, size);

    for (int i = 0; i < size; ++i){
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;
}