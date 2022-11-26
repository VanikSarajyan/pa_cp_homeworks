#include <iostream>

int main() {
    int arr[] = {5, 1, 65, 4};

    for(int x : arr){
        std::cout << x << ' ';
    }
    std::cout << std::endl;
}