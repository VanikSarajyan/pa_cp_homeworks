#include <iostream>

void print_to_n(int n){
    if(n == -1){
        return;
    }
    print_to_n(n - 1);
    std::cout << n << ' ';
}

int main() {
    int n;
    std::cin >> n;
    print_to_n(n);
}