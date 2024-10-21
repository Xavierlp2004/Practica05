/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @filesum_of_three_integer_numbers.cc
  * @author alu0101540467@ull.edu.es
  * @date Oct 21 2024
  * @brief El programa lee tres numeros e imprime la suma de estos 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P1221
  */

#include <iostream> 
using namespace std;

int main() {
  int numero_1, numero_2, numero_3;
  cin >> numero_1 >> numero_2 >> numero_3;
  int suma = numero_1 + numero_2 + numero_3;
  cout << suma << endl;
  return 0;
}
