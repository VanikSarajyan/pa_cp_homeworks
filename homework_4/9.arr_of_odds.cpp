#include <iostream>

int main() {
    int arr[] = {1,9,0,5,4,3,2};
    int length = sizeof(arr) / sizeof(arr[0]);

    int odd_count = 0;

    for(int i = 0; i < length; ++i){
        if(arr[i] % 2 == 1){
            ++odd_count;
        }
    }

    // g++ allows as C extension
    int odds[odd_count];

    for(int i = 0, j = 0; i < length; ++i){
        if(arr[i] % 2 == 1){
            odds[j] = arr[i];
            ++j;
        }
    }

    for(int i = 0; i < odd_count; ++i){
        std::cout << odds[i] << ' ';
    }

    std::cout << std::endl;
}