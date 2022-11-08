#include <iostream>

void to_lower_case(char * str){
    while(*str != '\0'){
        if(*str >= 'A' && *str <= 'Z')
            *str += 'a' - 'A';
        ++str;
    }
}

// same without comparison operators
// will work only for alphabetic inputs
// void to_lower(char * str){
//     while(*str != '\0'){
//         *str |= 'a' - 'A';
//         ++str;
//     }
// }

int main(){
    char str[] = "BACab";
    to_lower_case(str);
    std::cout << str << std::endl;
}