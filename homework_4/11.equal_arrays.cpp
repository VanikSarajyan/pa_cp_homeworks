#include <iostream>

bool equal_arrays(int * a, int * b, int length){
    for(int i = 0; i < length; ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    int a[] = {6,8,5,1,9,0,5,4,3,2};
    int b[] = {6,8,5,1,9,0,5,4,3,2};
    int length = sizeof(a) / sizeof(a[0]);

    std::cout << equal_arrays(a,b, length) << std::endl;
    a[0] = b[0] + 1;
    std::cout << equal_arrays(a,b, length) << std::endl;
}