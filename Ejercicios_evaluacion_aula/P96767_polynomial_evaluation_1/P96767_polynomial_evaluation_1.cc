/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Inés Cabrera Betancor
 * @date 2 NOV 2023
 * @brief Write a program that reads a x and a polynomial p(z) = c0 z0 + c1 z1 + ⋯ + cn zn, and computes p(x).
 * @bugs There are no known bugs
 */

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  double coeficiente{0}, contador{0}, potencias,  resto{0};
  std::cin >> coeficiente;
  while (std::cin >> potencias) {
    resto += potencias * pow(coeficiente, contador);
    ++contador;
  }
  std::cout << std::fixed << std::setprecision(4) << resto << std::endl;
  return 0;
}
  
