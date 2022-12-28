//C03EX4G - LOPA
#include <iostream>
using namespace std;



int main(void)
{
  int A, B, C, D, M1, M2, M3, M4, M5, M6, X1, X2, X3, X4, X5, X6;

  cout << "Insira o primeiro valor...: " ;
  cin >> A;
  cin.ignore (80,'\n');
  cout << "Insira o segundo valor....: " ;
  cin >> B;
  cin.ignore (80,'\n');
  cout << "Insira o terceiro valor...: " ;
  cin >> C;
  cin.ignore (80,'\n');
  cout << "Insira o quarto valor.....: " ;
  cin >> D;
  cin.ignore (80,'\n');

  cout << endl;

  M1 = A + B;
  M2 = A + C;
  M3 = A + D;
  M4 = B + C;
  M5 = B + D;
  M6 = C + D;

  X1 = A * B;
  X2 = A * C;
  X3 = A * D;
  X4 = B * C;
  X5 = B * D;
  X6 = C * D;

  cout << "Os resultados para a adicao sao........: " << M1 << ", " << M2 << ", " << M3 << ", " << M4 << ", " << M5 << ", " << M6 << endl;
  cout << "Os resultados para a multiplicao sao...: " << X1 << ", " << X2 << ", " << X3 << ", " << X4 << ", " << X5 << ", " << X6 << endl;
  cout << endl;
  cout << "Tecle <Enter> para encerrar....";
  cin.get();

}
