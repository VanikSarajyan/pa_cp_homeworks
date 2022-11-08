#include <iostream>

int recursive_lenght(char str[]){
    if (*str == '\0')
        return 0;
    return 1 + recursive_lenght(str + 1);
}

int main(){
    char str[] = "abc";
    std::cout << recursive_lenght(str) << std::endl;
}