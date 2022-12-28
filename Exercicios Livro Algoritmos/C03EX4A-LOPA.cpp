//C03EX4A-LOPA

#include <iostream>
using namespace std;

int main(void)
{
  float F, C;

  cout << "Insira o valor em graus Celsius...: ";
  cout << endl;

  cin >> C;
  cin.ignore(80, '\n');

  F = (C * 9/5) + 32;

  cout << "O valor em graus Fahrenheit e ....: " << F << endl;
  cout << "Aperte <Enter> para finalizar... ";
  cin.get();
  return 0;

}
