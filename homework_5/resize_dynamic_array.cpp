#include<iostream>

void print_array(int * arr, int size){
    for (int i = 0; i < size; ++i){
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int main(){
    int size;
    std::cout << "Enter size: ";
    std::cin >> size;
    int * arr = new int[size];

    for (int i = 0; i < size; ++i){
        std::cin >> arr[i];
    }

    print_array(arr, size);

    int new_size;
    std::cout << "Enter new size: ";
    std::cin >> new_size;

    // Rebuilding array on other address
    int * tmp = arr;
    arr = new int[new_size];

    std::cout << "Before: " << tmp << std::endl;
    std::cout << "After:  " << arr << std::endl;

    for (int i = 0; i < size; ++i){
        arr[i] = tmp[i];
    }

    delete [] tmp;

    print_array(arr, new_size);

    // Using placement new()
    new_size += 3;
    std::cout << "Before: " << arr << std::endl;
    arr = new(arr) int[new_size];
    std::cout << "After:  " << arr << std::endl;

    print_array(arr, new_size);

    delete [] arr;

}