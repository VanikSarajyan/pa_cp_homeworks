#include <iostream>

// int digits_sum(int n){
//     if (n < 100){
//         return n;
//     }

//     int sum = 0;
//     while(n != 0){
//         sum += n % 10;
//         n /= 10;
//     }

//     return sum;

// }

void reverse_array(int a[], int size){
    for(int i = 0; i < size / 2; ++i){
        int temp = a[i];
        a[i] = a[size - i - 1];
        a[size - i - 1] = temp;
    }
}

int main (){
    int n;

    std::cin >> n;
    
    int *a = new int[n];

    for(int i = 0; i < n; ++i){
        std::cin >> a[i];;
    }


    reverse_array(a, n);

    for(int i = 0; i < n; ++i){
        std::cout << a[i] << std::endl;
    }

    delete [] a;
    
}