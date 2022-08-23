#include <iostream>
using namespace std;

int main(){
    int x, y, z, a, min;
    cin >> x >> y >> z >> a;

    if(x + y + z + a == 0){
        min = x;    
        if(y < min)
            min = y;
        if(z < min)
            min = z;
        if(a < min)
            min = a;
        
        cout << min << endl;
    }

    return 0;
}