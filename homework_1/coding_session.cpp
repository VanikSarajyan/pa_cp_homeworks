// #include <iostream>
// using namespace std;

// int main(){
//     int x, y, z, max;
//     cin >> x >> y >> z;

//     max = x;
//     if(y > max)
//         max = y;
//     if(z > max)
//         max = z;
    
//     cout << max << endl;
// }

// #include <iostream>

// int main(){
//     int x, y, z, min;
//     std::cin >> x >> y >> z;

//     min = x;
//     if(y < min)
//         min = y;
//     if(z < min)
//         min = z;
    
//     std::cout << min << std::endl;

// }

// #include <iostream>

// int main() {
//     int x,y,z,a,min;

//     std::cin >> x >> y >> z >> a;

//     if (x + y + z + a == 0){
//         min = a;
//         if (x < min) min = x;
//         if (y < min) min = y;
//         if (z < min) min = z;
//     }

//     std::cout << min << std::endl;
// }

// #include <iostream>

// int main () {
//     for(int i = 0; i <= 100; ++i)
//         std::cout << i << ' ';
//     std::cout << std::endl;
// }

// #include <iostream>

// int main () {
//     for(int i = 0; i <= 100; i+=2)
//         std::cout << i << ' ';
//     std::cout << std::endl;
// }

// #include <iostream>

// int main () {
//     for(int i = 1; i <= 100; i+=2)
//         std::cout << i << ' ';
//     std::cout << std::endl;
// }

// #include <iostream>

// int main () {
//     int a, b;
//     std::cin >> a >> b;

//     a = a ^ b;
//     b = b ^ a;
//     a = a ^ b;

//     std::cout << a << " " << b << std::endl;

// }

// #include<iostream>

// int main () {
//     int n, m, max = 1;
//     std::cin >> n;

//     m = n;
//     while(n!=0){
//         n/=10;
//         max *= 10;
//     }

//     while(max != 1){
//         int digit = (m % max) / (max / 10);
//         max /= 10;
//         std::cout << digit << ' ';
//     }
// }

// #include <iostream>

// int main () {
//     int n, sum = 0;

//     std::cin >> n; 

//     while(n != 0){
//         sum += n %10;
//         n /= 10;
//     }

//     std::cout << sum << std::endl;
// }

// #include <iostream>

// int main() {
//     int a,b;
//     char c;

//     std::cin >> a >> b >> c;

//     switch(c){
//         case '+':
//             std::cout << a + b << std::endl;
//             break;
//         case '-':
//             std::cout << a - b << std::endl;
//             break;
//         case '*':
//             std::cout << a * b << std::endl;
//             break;
//         case '/':
//             std::cout << a / b << std::endl;
//             break;
//     }
// }

// #include <iostream>

// int main (){
//     int n;
//     std::cin >> n;

//     for(int i = 1; i < n; i+=2){
//         for (int j = 0; j < (n - i) / 2; ++j){
//             std::cout << ' ';
//         }
//         for(int j = 0; j < i; ++j){
//             std::cout << '*';
//         }
//         std::cout << std::endl;
//     }

//     for(int i = 0; i < n / 2; ++i){
//         for(int j = 0; j < n / 2; ++j){
//             std::cout << "=";
//         }
//         std::cout << std::endl;
//     }

// }

// int multiply(int a, int b, int c){
//     return a * b * c;
// }