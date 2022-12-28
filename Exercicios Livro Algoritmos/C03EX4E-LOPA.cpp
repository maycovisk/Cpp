//C03EX4E - LOPA
#include <iostream>
using namespace std;



int main(void)
{
  float P, VL, TX, TP;

  cout << "Insira o valor do bem......: ";
  cin >> VL;
  cin.ignore(80, '\n');

  cout << "Insira a taxa por atraso...: ";
  cin >> TX;
  cin.ignore(80, '\n');

  cout << "Insira o tempo de atraso...: ";
  cin >> TP;
  cin.ignore(80, '\n');

  P = VL + (VL * (TX/100)* TP);

  cout << "O valor da prestacao e de..: " << P << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar....";
  cin.get();

}
