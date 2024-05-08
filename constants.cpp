#include <iostream>
#include <string>
#include <math.h>


using namespace std;

int main(){
  const double pi = 3.1415926;
  int radius = 3;

  cout << "Digite o raio: ";
  cin >> radius;
  
  cout << "O comprimento do círculo é de: ";
  const double circle = 2 * pi * radius;

  cout << circle << "\n";
}
