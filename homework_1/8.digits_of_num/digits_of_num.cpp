#include <iostream>
using namespace std;

int main() {
    int n, n_copy, max = 1;

    cin >> n;

    n_copy = n;

    while(n != 0){
        n /= 10;
        max *= 10;
    }

    while(max != 1){
        max /= 10;
        int digit = (n_copy % (max * 10)) / max;
        cout << digit << ' ';
    }
    
    cout << endl;

    return 0;
}