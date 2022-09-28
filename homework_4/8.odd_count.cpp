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
    std::cout << odd_count << std::endl;
}