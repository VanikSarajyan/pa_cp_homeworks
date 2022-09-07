#include <iostream>

void strcat(char * s1, char * s2){
    int length_s1, length_s2;

    for (length_s1 = 0; s1[length_s1] != '\0'; length_s1++);

    for(length_s2 = 0; s2[length_s2] != '\0'; ++length_s2){
        s1[length_s1 + length_s2] = s2[length_s2];
    }

    s1[length_s1 + length_s2] = '\0';
}

int main() {
    char s1[100];
    char s2[10];

    std::cin.get(s1, 20).get();
    std::cin.get(s2, 10);

    strcat(s1, s2);

    std::cout << s1 << std::endl;
}