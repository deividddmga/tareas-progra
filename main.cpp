#include <iostream>
#include <limits>
using namespace std;

float calcular(float n1, float n2, char op); 

int main() {
    float num1, num2, resultado; 
    char operador, continuar; 

    do {
        cout << "\n--- CALCULADORA ---" << endl;
        
        cout << "Ingresa el primer numero: "; 
        cin >> num1; 
        
        cout << "Ingresa el segundo numero: "; 
        cin >> num2; 
        
        cout << "Ingresa la operacion (+, -, *, /): "; 
        cin >> operador; 

        resultado = calcular(num1, num2, operador);
        
        if (resultado != -99999.0) { 
            cout << "\n=> El resultado es: " << resultado << endl;
        }
        
        cout << "\n¿Deseas realizar otra operacion? (s/n): ";
        cin >> continuar;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (continuar == 's' || continuar == 'S');

    cout << "\n--- Programa finalizado. ---" << endl;
    return 0;
}

float calcular(float n1, float n2, char op) {
    float resultado;
    
    switch(op) {
        case '+': resultado = n1 + n2; break;
        case '-': resultado = n1 - n2; break;
        case '*': resultado = n1 * n2; break;
        
        case '/':
            if (n2 == 0) {
                cout << "Error: Division por cero no permitida." << endl;
                return -99999.0;
            } else {
                resultado = n1 / n2;
            }
            break;
            
        default:
            cout << "Error: Operador '" << op << "' no valido." << endl;
            return -99999.0;
    }
    
    return resultado;
}