#include <iostream>

int sum_arr(int a[], int index){
    if (index <= 0){
        return 0;
    }
    return a[index - 1] + sum_arr(a, index - 1);
}

int main(){
    int a[] = {1,2,3,4,5};
    int size = sizeof(a) / sizeof(a[0]);
    std::cout << sum_arr(a, size) << std::endl;
}