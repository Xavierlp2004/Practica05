/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file control_C101A.cc
  * @author alu0101540467ull.edu.es
  * @date Oct 21 2024
  * @brief El programa lee un numero entero e imprime la suma de los ultimos 3
  * digitos de dicho numero 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P37297
  */

#include <iostream>
using namespace std;

int main() {
  int numero, suma = 0;
  cin >> numero;
  if (numero < 100) {
    return 0;
  } else {
    for (int i = 1; i <= 3; i++) {
      suma = suma + (numero % 10);
      numero = numero / 10;
    }
  }
  cout << suma << endl;
  return 0;
} 







