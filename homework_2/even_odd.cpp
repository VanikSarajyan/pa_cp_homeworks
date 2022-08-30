#include <iostream>

int abs(int a){
    return a >= 0 ? a : -a;
}

int main() {
    int n, even_sum = 0, odd_product = 1;
    std::cin >> n;

    int a[n];
    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        if(a[i] % 2 == 0){
            even_sum += a[i];
        } else {
            odd_product *= a[i];
        }
    }

    std::cout << abs(odd_product - even_sum) << std::endl;
}