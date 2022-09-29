#include <iostream>

short min_ascii(const char * s){
    short min = s[0];
    for(int i = 1; s[i] != '\0'; ++i){
        if(s[i] < min){
            min = s[i];
        }
    }
    return min;
}

short max_ascii(const char * s){
    short max = s[0];
    for(int i = 1; s[i] != '\0'; ++i){
        if(s[i] > max){
            max = s[i];
        }
    }
    return max;
}

bool is_vowel(char c){
    return  c == 'a' || c == 'A' || c == 'o' || c == 'O' || 
            c == 'i' || c == 'I' || c == 'u' || c == 'U' ||
            c == 'e' || c == 'E';
}

int vowel_count(const char * s){
    int count = 0;

    for(int i = 1; s[i] != '\0'; ++i){
        if(is_vowel(s[i])){
            ++count;
        }
    }

    return count;
}

void print_reverse(const char * s){
    int length = 0;
    for(;s[length] != '\0'; ++length);
    for(;length >= 0; --length){
        std::cout << s[length - 1];
    }
    std::cout << std::endl;
}

void reverse(char * s){
    int length = 0;
    for(;s[length] != '\0'; ++length);

    for(int i = 0; i < length / 2; ++i){
        std::swap(s[i], s[length - 1 - i]);
    }
}

void to_upper_case(char * s){
    char diff = 'A' - 'a';

    for(int i = 0; s[i] != '\0'; ++i){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] += diff;
        }
    }
}


int main() {
    char s[] = "CheeseBurger";

    std::cout << "Min ascii: " << min_ascii(s) << std::endl;
    std::cout << "Max ascii: " << max_ascii(s) << std::endl;
    std::cout << "Vowel count: " << vowel_count(s) << std::endl;
    print_reverse(s);
    std::cout << "Before reverse: " << s << std::endl;
    reverse(s);
    std::cout << "After reverse: " << s << std::endl;
    to_upper_case(s);
    std::cout << "After uppercase: " << s << std::endl;

}