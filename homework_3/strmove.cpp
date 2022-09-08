#include <iostream>

int strlen(char * line){
    int length = 0;
    while( *(line + length) != '\0'){
        ++length;
    }
    return length;
}

void strmove(char * str, int n){
    int len = strlen(str);
    for(int j = 0; j < n; ++j){
        char last = str[len - 1];
        for(int i = len - 1; i > 0; --i){
            str[i] = str[i - 1];
        }
        str[0] = last;
    }
}

int main() {
    char str[50];
    int n;

    std::cin >> str;
    std::cin >> n;

    strmove(str, n);
    std::cout << str << std::endl;
}