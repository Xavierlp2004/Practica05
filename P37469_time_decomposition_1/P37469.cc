/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file time_decomposition(1).cc
  * @author alu0101540467@ull.edu.es
  * @date Oct 21 2024
  * @brief El programa toma un numero de segundos e imprime el numero de horas
  * minutos y segundos a partir del numero inicial de segundos 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P37469
  */

#include <iostream>
using namespace std;

int main() {
  int numero;
  cin >> numero;

  int horas, minutos, segundos;
  segundos = numero % 60;
  minutos = numero / 60;
  horas = minutos / 60;
  minutos = minutos % 60;
    
  cout << horas << " " << minutos << " " << segundos << endl;
  return 0; 
}
