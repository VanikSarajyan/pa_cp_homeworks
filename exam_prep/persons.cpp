#include <iostream>

struct person {
    char name[20];
    char surname[20];
    int age;
    int grades[10];
};

void input_person(person & p){
    std::cout << "Name: ";
    std::cin >> p.name;
    std::cout << "Surname: ";
    std::cin >> p.surname;
    std::cout << "Age: ";
    std::cin >> p.age;
}
// using operator overloading
std::istream & operator >>(std::istream & in, person & p){
    std::cout << "Name: ";
    in >> p.name;
    std::cout << "Surname: ";
    in >> p.surname;
    std::cout << "Age: ";
    in >> p.age;
    return in;
}

void print_person(person p){
    std::cout << "Name: " << p.name << std::endl;
    std::cout << "Surname: " << p.surname << std::endl;
    std::cout << "Age: " << p.age << std::endl;
}

int main(){
    person p1, p2;
    input_person(p1);
    std::cin >> p2;

    print_person(p1);
    print_person(p2);
}