#include <iostream>

char * to_upper_case(char * str){
    char diff = 'A' - 'a';

    for(int i = 0; str[i] != '\0'; ++i){
        if(str[i] > 'Z'){
            str[i] += diff;
        }
    }

    return str;
}

int main() {
    char str[15];

    std::cin.getline(str, 15);

    std::cout << to_upper_case(str) << std::endl;
}