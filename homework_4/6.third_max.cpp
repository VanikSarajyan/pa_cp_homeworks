#include <iostream>

int main() {
    int arr[] = {1,-9,0,5,4,3,2,10};
    int length = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    int second_max = arr[1];
    int third_max = arr[2];

    for(int i = 0; i < length; ++i){
        if(arr[i] > max){
            third_max = second_max;
            second_max = max;
            max = arr[i];
        } else if (arr[i] > second_max){
            third_max = second_max;
            second_max = arr[i];
        } else if (arr[i] > third_max){
            third_max = arr[i];
        }
    }

    std::cout << third_max << std::endl;
}