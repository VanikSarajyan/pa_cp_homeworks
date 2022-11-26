#include <iostream>

int main() {
    int a = 5;
    int b = 10;
    int *pa = &a;

    // value can't be changed
    const int * pointer_to_const_int = &a;

    std::cout << *pointer_to_const_int << std::endl;
    // can point to other address
    pointer_to_const_int = &b;
    std::cout << *pointer_to_const_int << std::endl;
    // *pointer_to_const_int = 55; error

    //pointer can't point to other address
    int * const const_pointer_to_int = &a;

    //value can be changed
    *const_pointer_to_int = 55;
    std::cout << *const_pointer_to_int << std::endl;

    // const_pointer_to_int = &b; error
}