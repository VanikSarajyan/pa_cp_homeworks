#include <iostream>
using namespace std;

int main(){
    int x, y, z, min;
    cin >> x >> y >> z;

    min = x;
    if(y < min)
        min = y;
    if(z < min)
        min = z;
    
    cout << min << endl;

    return 0;
}