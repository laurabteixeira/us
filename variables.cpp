#include <iostream>
#include <string>
#include <math.h>


using namespace std;

void print_number(int number){
  std::cout<<std::to_string(number)<<endl;
}

int main(){
  int a, b;
  a = 12;
  b=4;

  float j = 6.02e23;

  unsigned int x = 20u; //x é inicializado como um número sem sinal, pois é unsigned. 
  x -= 20u; 
  std::cout << "x: " << x << std::endl;

  cout << j << "\n";

  const string str = R"("string" with \backslash)";
  cout << str << "\n";

  auto result = a+b;
  print_number(result);

  int c (10);
  decltype(a) magago_idade (10);
  print_number(magago_idade);
  
  // 2^16 - 1
  unsigned short max_short = pow(2,16)-1;  
}
