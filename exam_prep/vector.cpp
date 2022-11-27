#include <iostream>

struct Vector {
    int * arr;
    int size;
    int capacity;
};

void push_back(Vector * v, int a){
    if(v->size == v->capacity){
        int * new_arr = new int[2 * v->capacity];
        for(int i = 0; i < v->size; ++i){
            new_arr[i] = v->arr[i];
        }
        new_arr[v->size++] = a;
        v->capacity = 2 * v->capacity;
        v->arr = new_arr;

    } else {
        v->arr[v->size++] = a;
    }
}

void print(Vector * v){
    for(int i = 0; i < v->size; ++i){
        std::cout << v->arr[i] << ' ';
    }
    std::cout << std::endl;
}

void print_stats(Vector * v){
    std::cout << "Size: " <<  v->size << std::endl;
    std::cout << "Capacity: " <<  v->capacity << std::endl;

}

int main() {
    int arr[5] = {1,2,3,44};
    Vector * v = new Vector;
    v->arr = arr;
    v->size = 4;
    v->capacity = 5;

    push_back(v, 4);
    push_back(v, 5);
    push_back(v, 6);

    print_stats(v);
    print(v);
}