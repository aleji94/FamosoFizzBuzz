#include <iostream>
using namespace std;

/*
 * Escribe un programa que muestre por consola (con un print) los
 * n�meros de 1 a 100 (ambos incluidos y con un salto de l�nea entre
 * cada impresi�n), sustituyendo los siguientes:
 * - M�ltiplos de 3 por la palabra "fizz".
 * - M�ltiplos de 5 por la palabra "buzz".
 * - M�ltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
 */

int main() {
    // Ciclo para imprimir los n�meros del 1 al 100
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            // Es m�ltiplo de ambos 3 y 5
            cout << " FizzBuzz - : " << i << endl;
        } else if (i % 5 == 0) {
            // Es m�ltiplo de 5
            cout << " Buzz - : " << i << endl;
        } else if (i % 3 == 0) {
            // Es m�ltiplo de 3
            cout << " Fizz - : " << i << endl;
        } else {
            // No es m�ltiplo de 3 ni de 5
            cout << ": " << i << endl;
        }
    }

    return 0;
}


