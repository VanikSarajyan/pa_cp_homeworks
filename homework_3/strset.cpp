#include <iostream>

void strset(char * str, char ch){
    for(int i = 0; str[i] != '\0'; ++i){
        str[i] = ch;
    }
}

int main() {
    char str[50];
    char ch;

    std::cin >> str;
    std::cin >> ch;

    strset(str, ch);
    std::cout << str << std::endl;
}