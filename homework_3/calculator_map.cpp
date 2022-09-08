#include <iostream>
#include <map>

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int di(int a, int b){
    return a / b;
}

int mul(int a, int b){
    return a * b;
}

int main() {

    std::map<char, int (*)(int, int)> function_table;

    function_table['+'] = add;
    function_table['-'] = sub;
    function_table['/'] = di;
    function_table['*'] = mul;

    int a,b;
    char op;

    std::cin >> a >> op >> b;

    if(!(function_table.find(op) == function_table.end())){
        std::cout << function_table[op](a,b) << std::endl;
    } else {
        std::cout << "Invalid operation: " << op << std::endl;
    }

}
