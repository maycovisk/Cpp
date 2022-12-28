//C02EX16.CPP

#include <iostream>
#include <cmath> //usado para operação matematica
using namespace std;

const float PI = 3.14159; // ou #define PI 3.14159

int main(void)
{

  float V, H, R;

  cout << "Entre a altura...: ";
  cin >> H;
  cin.ignore(80,'\n');

  cout << "Entre o raio.....: ";
  cin >> R;
  cin.ignore(80, '\n');

  V = H * PI * pow(R, 2); //pow da biblioteca cmath

  cout << "Area do Cilindro.: " << V << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar....";
  cin.get();
  return 0;

}
