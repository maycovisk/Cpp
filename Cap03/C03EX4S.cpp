//CAP03-EX4S

#include <iostream>
using namespace std;

int main(void)
{
  float A, B, R1, R2, R3, R4;

  cout << "Insira o primeiro valor...: " << endl;
  cin >> A;
  cin.ignore(80,'\n');

  cout << "Insira o segundo valor....: " << endl;
  cin >> B;
  cin.ignore(80,'\n');

  R1 = A + B;
  R2 = A - B;
  R3 = A * B;
  R4 = A / B;

  cout << "Resultado = " << R1 << endl;
  cout << "Resultado = " << R2 << endl;
  cout << "Resultado = " << R3 << endl;
  cout << "Resultado = " << R4 << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar...";
  cin.get();
  return 0;

}


