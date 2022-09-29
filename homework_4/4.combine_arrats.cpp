#include <iostream>

int main() {
    int a[] = {0,1,2,3};
    int b[] = {4,5,6};
    const int length_a = sizeof(a) / sizeof(a[0]);
    const int length_b = sizeof(b) / sizeof(b[0]);

    int combined[length_a + length_b];

    for(int i = 0, j = length_a; i < length_a || j < length_a + length_b; ++i, ++j){
        combined[i] = a[i];
        combined[j] = b[j - length_a];
    }

    for(int i = 0; i < length_a + length_b; ++i){
        std::cout << combined[i] << ' ';
    }

    std::cout << std::endl;
}