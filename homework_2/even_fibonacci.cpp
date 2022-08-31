#include <iostream>

long long sum_of_even_fib(int limit){

    if(limit < 2){
        return 0;
    }

    long long sum = 0;
    int first = 1, second = 2;
    int next = 0;

    while(next <= limit){

        if(second % 2 == 0){
            sum += second;
        }

        next = first + second;
        first = second;
        second = next;
    }

    return sum;

}

int main() {
    int limit;
    std::cin >> limit;

    std::cout << sum_of_even_fib(limit) << std::endl;
}