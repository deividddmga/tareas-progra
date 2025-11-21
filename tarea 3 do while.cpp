#include <iostream>

int main() {
    int n;
   
    std::cout << "Ingresa un numero: ";
    std::cin >> n;
    do {
        std::cout << n << "\n";
        n--; 
    } 

    while (n >= 0);
    
    return 0;
}