/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Basica
*
* @author Ines Cabrera Betancor
* @date 2 NOV 2023
* @brief This program reads a number x and a polynomial p(z) = c0 z0 + c1 z1 + ⋯ + cn zn, and computes p(x).
*/

#include<iostream>
#include<vector>
#include<cmath>
#include<iomanip>

int main() {
  double coeficiente{0}, potencias{0}, contador{0};
  std::vector<double> vec;
  double resultado {0.0};
  std::cin >> coeficiente;
  while (std::cin >> potencias) {
    vec.push_back(potencias);
    contador++;
  }
  for (int i=0; i < vec.size(); i++) {
    resultado += vec[i] * pow(coeficiente, contador - 1);
    contador--;
  }
  std::cout << std::fixed << std::setprecision(4) <<  resultado << std::endl;
  return 0;
}
