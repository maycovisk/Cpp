//C03EX4F - LOPA
#include <iostream>
using namespace std;



int main(void)
{
  int A, B, X;

  cout << "Insira o valor de A..............: ";
  cin >> A;
  cin.ignore (80, '\n');
  cout << endl;

  cout << "Insira o valor de B..............: ";
  cin >> B;
  cin.ignore (80,'\n');

  X = A;
  A = B;
  B = X;

  cout << "A troca de valores de A e B sao..: " << A << " e " << B << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar....";
  cin.get();

}
