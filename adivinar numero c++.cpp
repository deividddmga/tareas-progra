#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
  
    std::srand(std::time(0)); 
  
    const int SECRETO = (std::rand() % 100) + 1; 
    
    int intento = 0;
    std::cout << "Adivina un numero entre 1 y 100.\n";

    while (intento != SECRETO) {
        
    
        std::cout << "Ingresa tu numero: ";
        std::cin >> intento;
        
 
        if (intento < SECRETO) {
            std::cout << "El numero secreto es MAYOR.\n";
        } 
        else if (intento > SECRETO) {
            std::cout << "El numero secreto es MENOR.\n";
        }
        

    }
    

    std::cout << "\n¡GANASTE!:))El numero era " << SECRETO << ".\n";
    
    return 0;
}