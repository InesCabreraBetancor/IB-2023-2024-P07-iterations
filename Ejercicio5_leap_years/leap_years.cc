/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
* 
* @author Inés Cabrera Betancor
* @date 30 OCT 2023
* @brief Escriba un programa que lea una año y dicte si es biciesto o no.
* @bugs There are no known bugs
* @see https://github.com/IB-2023-2024-P07-iterations/blob/main/iterations.md
*/

#include<iostream>

void PrintProgramPurpose() {
  std::cout << "This program prints YES if the given year is a leap year or NO if it is not a leap year." << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called" << argv[0] << " param1" << std::endl;
    std::cout << "param1: " << " An integer number meaning a year" << std::endl;
    return false;
  }
  return true;
}

void LeapYear(int year){
  int four{year % 4}, hundred{year % 100}, four_hundred{year % 400};
  if ((four == 0 && hundred != 0) || four_hundred == 0) {
    std::cout << "YES" << std::endl;
  } else {
      std::cout << "NO" << std::endl;
  }
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 345;
  }
  std::cout << "Everything is fine!. Lets continue with the normal execution...\n" << std::endl;
  LeapYear(atoi(argv[1]));
  return 0;
}
