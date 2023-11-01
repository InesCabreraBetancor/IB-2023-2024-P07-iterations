/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
* 
* @author Inés Cabrera Betancor
* @date 30 OCT 2023
* @brief Escriba un programa que lea un número natural e imprima como salida la suma de los dígitos del número en cuestión.
* @bugs There are no known bugs
* @see https://github.com/IB-2022-2023/P07-iterations/blob/main/iterations.md
*/

#include<iostream>

void PrintProgramPurpose() {
  std::cout << "This program print the sum of the digits of a number which is given by command line." << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called" << argv[0] << " param1" << std::endl;
    std::cout << "param1: " << " An integer number which digits will be sum up" << std::endl;
    return false;
  }
  return true;
}

int SumDigits(int num){
  int suma{0};
  while (num > 0) {
    suma += (num % 10);
    num /= 10;
  }
  return suma;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 345;
  }
  std::cout << "Everything is fine!. Lets continue with the normal execution...\n" << std::endl;
  std::cout << "The sum of the digits of " << argv[1] << " is " << SumDigits(atoi(argv[1])) << std::endl;
  return 0;
}
