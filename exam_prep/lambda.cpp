#include <iostream>

auto is_even_lambda = [](int x) {
    return x % 2 == 0;
};

bool is_even_normal(int x){
    return x % 2 == 0;
}

void print_in_condition(int * arr, int size, bool(*condition)(int)){
    for(int i = 0; i < size; ++i){
        if(condition(arr[i])){
            std::cout << arr[i] << ' ';
        }
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {1,5,74,5,6,85,98};

    // Creating pointer to function is_even_lambda
    bool (*ptr_is_even_lambda)(int) = is_even_lambda;

    // All following function calls have same results

    print_in_condition(arr, sizeof(arr) / sizeof(arr[0]), is_even_normal);

    print_in_condition(arr, sizeof(arr) / sizeof(arr[0]), is_even_lambda);

    print_in_condition(arr, sizeof(arr) / sizeof(arr[0]), ptr_is_even_lambda);
    // can be decalred in function call
    print_in_condition(arr, sizeof(arr) / sizeof(arr[0]), [](int x){ return x % 2 == 0;});
}