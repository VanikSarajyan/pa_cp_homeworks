#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int a[n];
    bool visited[n];

    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        if(!visited[i]){
            int count = 1;
            for(int j = i + 1; j < n; ++j){
                if(a[i] == a[j]){
                    ++count;
                    visited[j] = true;
                }
            }
            std::cout << a[i] << ": " << count << ", ";
        }
    }

    std::cout << std::endl;
}