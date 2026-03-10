#include <iostream>
#include <string>

int main() {
    std::string name;
    int age = 0;
        std::cout << "Como se llama tu nombre?\n";
    std::cin >> name;
    std::cout << "Cuantos anos tu tienes?\n";
    std::cin >> age;
    std::cout << "Pues holi " << name << "\n";
    std::cout << age << " anos\n";
    return 0;
}