#include <iostream>
#include <string>

int main() {
    while (true) {
        std::string cmd;
        std::cin >> cmd;
        if (cmd == "sum") {
            int n, m;
            std::cin >> n >> m;
            std::cout << n + m << "\n";
            continue;
        }
        if (cmd == "resta") {
            int n, m;
            std::cin >> n >> m;
            std::cout << n - m << "\n";
            continue;
        }
        if (cmd == "multi") {
            int n, m;
            std::cin >> n >> m;
            std::cout << n * m << "\n";
            continue;
        }
        if (cmd == "div") {
            int n, m;
            std::cin >> n >> m;
            std::cout << n / m << "\n";
            continue;
        }
        if (cmd == "Exit") {
            break;
        }
        std::cout << "sorry bro" << "\n";
    }
    return 0;
}