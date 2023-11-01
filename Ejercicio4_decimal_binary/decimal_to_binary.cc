/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
* 
* @author Inés Cabrera Betancor
* @date 30 OCT 2023
* @brief El programa convierte un numero decimal a binario.
* @bugs There are no known bugs
* @see https://github.com/IB-2023-2024-P07-iterations/blob/main/iterations.md
*/

#include<iostream>
#include<cmath>

void PrintProgramPurpose() {
  std::cout << "This program converts decimal number given by command line to binary representation." << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called" << argv[0] << " param1" << std::endl;
    std::cout << "param1: " << " A decimal integer number." << std::endl;
    return false;
  }
  return true;
}

int Binary(int decimal){
  int binary{0}, resto{0}, counter{1};
  while (decimal != 0) {
    resto= decimal % 2;
    binary += resto * counter;
    counter *= 10;
    decimal /= 2;
  }
  return binary;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 345;
  }
  std::cout << "Everything is fine!. Lets continue with the normal execution...\n" << std::endl;
  std::cout << "The binary of the number " << argv[1] << " is " << Binary(atoi(argv[1])) << std::endl;
  return 0;
}
