#include <iostream>

bool is_prime(int x){
    return x == 2 || x == 3 || x == 5 || x == 7;
}

int count_prime_digits(int n){
    int count = 0;
    while(n != 0){
        if(is_prime(n % 10)){
            ++count;
        }
        n /= 10;
    }
    return count;
}

int main(){
    std::cout << count_prime_digits(125678444) << std::endl;
}