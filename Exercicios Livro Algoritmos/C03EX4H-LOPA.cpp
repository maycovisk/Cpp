//C03EX4H - LOPA
#include <iostream>
using namespace std;



int main(void)
{
  float V, C, L, A;

  cout << "Insira o comprimento da caixa...: ";
  cin >> C;
  cin.ignore(80,'\n');
  cout << endl;

  cout << "Insira a largura da caixa.......: ";
  cin >> L;
  cin.ignore(80, '\n');
  cout << endl;

  cout << "Insira a altura da caixa........: ";
  cin >> A;
  cin.ignore(80, '\n');

  V = C * L * A;

  cout << "O volume da caixa e.............: " << V << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar....";
  cin.get();

}
