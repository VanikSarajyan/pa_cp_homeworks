#include<iostream>

int main() {
    int n, count = 0;
    std::cin >> n;

    int a[n];
    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }
    // n % 0 is not defined
    for(int i = 1; i < n; ++i){
        if(a[i] % i == 0){
            ++count;
        }
    }

    std::cout << count << std::endl;
}