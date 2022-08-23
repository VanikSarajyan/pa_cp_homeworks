#include <iostream>
using namespace std;

int multiply_3(int a, int b, int c){
    return a * b * c;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << multiply_3(a, b, c) << endl;

    return 0;
}