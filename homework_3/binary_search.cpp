#include <iostream>

int binary_search_recursive(int a[], int x, int start, int end){

    if(start > end) {
        return -1;
    }

    int mid = (end + start) / 2;

    if (x == a[mid]){
        return mid;
    } else if (x > a[mid]){
        return binary_search_recursive(a, x, mid + 1, end);
    } else {
        return binary_search_recursive(a, x, start, mid - 1);
    }

}

int binary_search_iterative(int a[], int size, int x) {
    int start = 0;
    int end = size;

    while (start <= end ){

        int mid = (end + start) / 2;

        if (x == a[mid]){
            return mid;
        } else if (x > a[mid]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    int a[] = {-6,1,2,5,6,10,15};
    int size = sizeof(a) / sizeof(a[0]);

    int x;
    std::cin >> x;

    std::cout << binary_search_recursive(a, x, 0, size) << std::endl;
    std::cout << binary_search_iterative(a, size, x) << std::endl;
}