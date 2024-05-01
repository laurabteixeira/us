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
  b=14;
  
  const string mongay = "gabriel";

  cout << mongay;

  auto result = a+b;
  print_number(result);

  int c (10);
  decltype(a) magago_idade (10);
  print_number(magago_idade);
  
  // 2^16 - 1
  unsigned short max_short = pow(2,16)-1;  
}
