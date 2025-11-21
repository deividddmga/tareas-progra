#include <iostream>

int main() {
    int n;

    std::cout << "Ingresa un numero: ";
    std::cin >> n;
    
    while (n >= 0) {
        std::cout << n << "\n";
        n--; 
    }
    
    return 0;
}