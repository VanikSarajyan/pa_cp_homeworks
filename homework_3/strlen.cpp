#include <iostream>

int strlen(char * line){
    int length = 0;
    while( *(line + length) != '\0'){
        ++length;
    }
    return length;
}

int main() {
    char line[15];

    std::cin.getline(line, 15);

    std::cout << line << std::endl;
    std::cout << strlen(line) << std::endl;
}