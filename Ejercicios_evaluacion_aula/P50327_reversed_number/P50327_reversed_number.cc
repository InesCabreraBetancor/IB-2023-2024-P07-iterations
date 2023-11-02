/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Basica
*
* @author Ines Cabrera Betancor
* @date 2 NOV 2023 
* @brief This program reseve a number and writes it reversed
*/

#include<iostream>

int main() {
  int number{0};
  std::cin >> number;
  if (number != 0) {
    while (number > 0){
      std::cout << (number % 10);
      number /= 10;
    } 
  } else {
    std::cout << "0";
  }
  std::cout << std::endl;
  return 0;
}

