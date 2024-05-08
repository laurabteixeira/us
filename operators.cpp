#include <iostream>
#include <string>
#include <math.h>
#include <unistd.h> 


using namespace std;

int main(){
  int a, b, c;

  a = b = 12;

  c = 10;

  b -= 5;

  cout << b << "\n";

  int d = c % b;

  cout << d << "\n";

  if (a == 12) {
    cout << "true" << "\n";
  };

  int x, y, z;

  x = 2;
  y = 8;
  z = (x>y) ? x : y;

  cout << z << "\n";

  float high;

  cout << "Digite a sua altura: ";
  cin >> high;

  cout << "Calculando..." << "\n";
  sleep(2);
  cout << "Espere mais um pouco..." << "\n";
  sleep(2);
  cout << "Isso está levando mais tempo do que o esperado..." << "\n";
  sleep(2);
  cout << "Resultado: " << "\n";
  if (high >= 1.80) {
    cout << "Sua altura: " << high << "\n" << "Vc e alto dms 😍!!!" << "\n";
  } 
  else {
    cout << "Sua altura: " << high << "\n" << "Vc e baixo dms 😭!!!" << "\n";
  };

  


}
