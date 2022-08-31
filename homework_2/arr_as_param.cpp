#include <iostream>
 
// if declared with arr[] throws an error?
void func(int *arr)
{
    std::cout << "Inside function:" << sizeof(arr) << std::endl;
    std::cout << arr << std::endl;
}

int main()
{
    int arr[4];
    
    std::cout << "In main: " << sizeof(arr) << std::endl;
    std::cout << arr << std::endl;

    func(arr);
}