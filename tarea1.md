# tareas
#include <iostream>

int main() {
    int n, i = 1;
    long long suma_cuadrados = 0; 

    std::cout << "Ingrese un numero :";
    std::cin >> n;
    std::cout << "Calculo: ";
    
    while (i <= n) {
        long long cuadrado = (long long)i * i;
        suma_cuadrados += cuadrado;

        std::cout << i << "^2";
        if (i < n) {
            std::cout << " + ";
        }
        
        i++; 
    }

    std::cout << "\nResultado: " << suma_cuadrados << std::endl;
    return 0;
}
