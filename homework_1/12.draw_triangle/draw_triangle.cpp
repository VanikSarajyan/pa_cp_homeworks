#include <iostream>
using namespace std;

int main() {
    int side;
    cin >> side;

    for(int i = 1; i < side + 1; ++i){
        for(int j = 0; j < i; ++j){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}