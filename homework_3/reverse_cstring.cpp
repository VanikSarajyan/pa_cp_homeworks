#include <iostream>

int strlen(char * line){
    int length = 0;
    while( *(line + length) != '\0'){
        ++length;
    }
    return length;
}


void strrev(char * str){
    int lenght = strlen(str);

    for(int i = 0; i < lenght / 2; ++i){
        char temp = str[i];
        str[i] = str[lenght - 1 - i];
        str[lenght - 1 - i] = temp;
    }
}

int main() {
    char str[15];

    std::cin.getline(str, 15);

    strrev(str);
    std::cout << str << std::endl;
}