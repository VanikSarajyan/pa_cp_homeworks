#include <iostream>

int main() {
    int arr[] = {6,8,5,1,9,0,5,4,3,2};
    int length = sizeof(arr) / sizeof(arr[0]);

    int evens_index = 0;

    for(int i = 0; i < length; ++i){
        if(arr[i] % 2 == 0){
            std::swap(arr[evens_index], arr[i]);
            ++evens_index;
        }
    }

    for(int i = 0; i < length; ++i){
        std::cout << arr[i] << ' ';
    }

    std::cout << std::endl;
}