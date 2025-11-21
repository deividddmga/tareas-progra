#include <iostream>

int main() {
    int n;
    std::cout << "Ingresa un numero: ";
    std::cin >> n;

    for (int i = n; i >= 0; i--) {
        std::cout << i << "\n";
    }
    
    return 0;
}