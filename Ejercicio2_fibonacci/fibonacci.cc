/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
* 
* @author Inés Cabrera Betancor
* @date 30 OCT 2023
* @brief Escriba un programa que imprima la salida de la secuencia de fibonacci hasta el limite indicado.
* @bugs There are no known bugs
* @see https://github.com/IB-2023-2024-P07-iterations/blob/main/iterations.md
*/

#include<iostream>

void PrintProgramPurpose() {
  std::cout << "This program print the fibonacci sequence until the number given by command line." << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called" << argv[0] << " param1" << std::endl;
    std::cout << "param1: " << " An integer number meaning how many digits of the sequence we want." << std::endl;
    return false;
  }
  return true;
}

void Fibonacci(int limit){
  if (limit == 1) { 
  std::cout << "0" << std::endl;
  } else {
    std::cout << "0 1 ";
    int num1{0}, num2{1}, num3{1};
    if (limit > 0) {
      for (int i=0; i < limit - 2; i++) {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        std::cout << num3 << " ";
      }
      std::cout << std::endl;
    } else {
      std::cout << 0 << std::endl;
    }
  }
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 345;
  }
  std::cout << "Everything is fine!. Lets continue with the normal execution...\n" << std::endl;
  std::cout << "The fibonacci sequence until the " << argv[1] << " digit is ";
  Fibonacci(atoi(argv[1]));
  return 0;
}
