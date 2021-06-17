#include <iostream>

int main() {
  
  double pesos, reais, soles, dollars;
  std::cout <<"Enter number of Colombian Pesos: ";
  std::cin>> pesos; // 1 peso is .00027 is US currency
  std::cout <<"Enter number of Brazilian Reais: ";
 std::cin>> reais;// 1 Reais is .18 in US currency
 std::cout<<"Enter Number of Peruvian Soles: "; 
  std::cin>> soles;// 1 Sole is .27 in US currency 
  double peso_value = .0027;
  double reais_value = .18;
  double sole_value = .27;
dollars = ((peso_value * pesos)+ (reais_value *reais)+(sole_value * soles));
std::cout<<"US Dollars $: "<< dollars << "\n";


}

