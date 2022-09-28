#include <iostream>

int main() {
    int arr[] = {1,-9,0,5,4,3,2,-10};
    int length = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < length; ++i){
        if(arr[i] % 2 == 0){
            std::cout << arr[i] << ' ';
        }
    }
    std::cout << std::endl;
}