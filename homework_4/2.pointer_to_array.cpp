#include <iostream>

int main() {
    int arr[] = {1,2,3,4,5};
    int length = sizeof(arr) / sizeof(arr[0]);

    int * pa = &arr[0];

    for(int i = 0; i < length; ++i){
        std::cout << *(pa + i) << ' ';
    }

    std::cout << std::endl;
}