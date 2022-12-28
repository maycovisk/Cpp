//C03EX4A-LOPA

#include <iostream>
using namespace std;

int main(void)
{
  float F, C;

  cout << "Insira o valor em graus Fahrenheit...: ";
  cout << endl;

  cin >> F;
  cin.ignore(80, '\n');

  C = ((F - 32)* 5)/9;

  cout << "O valor em graus Celsius e ..........: " << C << endl;
  cout << "Aperte <Enter> para finalizar... ";
  cin.get();
  return 0;

}
