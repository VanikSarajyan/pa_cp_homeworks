#include <iostream>
using namespace std;

int main(){
    int x, y, z, max;
    cin >> x >> y >> z;

    max = x;
    if(y > max)
        max = y;
    if(z > max)
        max = z;
    
    cout << max << endl;

    return 0;
}