//C03EX4J
#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
  int A, B, R;

  cout << "Insira o primeiro valor...: ";
  cin >> A;
  cin.ignore(80, '\n');
  cout << endl;

  cout << "Insira o segundo valor....: ";
  cin >> B;
  cin.ignore(80, '\n');

  R = pow((A - B),2);

  cout << "O quadrado da diferenca entre os dois valores..: " << R << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar....";
  cin.get();
  return 0;
}
