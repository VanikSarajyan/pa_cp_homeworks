#include <iostream>

int main() {
    int arr[] = {1,-9,0,5,4,3,2,-10};
    int length = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0];
    int second_min = arr[1];

    for(int i = 0; i < length; ++i){
        if(arr[i] < min){
            second_min = min;
            min = arr[i];
        }else if(arr[i] < second_min){
            second_min = arr[i];
        }
    }

    std::cout << second_min << std::endl;
}