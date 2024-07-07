#include <iostream>
using namespace std;

/*
 * Escribe un programa que muestre por consola (con un print) los
 * números de 1 a 100 (ambos incluidos y con un salto de línea entre
 * cada impresión), sustituyendo los siguientes:
 * - Múltiplos de 3 por la palabra "fizz".
 * - Múltiplos de 5 por la palabra "buzz".
 * - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
 */

int main() {
    // Ciclo para imprimir los números del 1 al 100
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            // Es múltiplo de ambos 3 y 5
            cout << " FizzBuzz - : " << i << endl;
        } else if (i % 5 == 0) {
            // Es múltiplo de 5
            cout << " Buzz - : " << i << endl;
        } else if (i % 3 == 0) {
            // Es múltiplo de 3
            cout << " Fizz - : " << i << endl;
        } else {
            // No es múltiplo de 3 ni de 5
            cout << ": " << i << endl;
        }
    }

    return 0;
}


