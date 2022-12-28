//C03EX4D - LOPA
#include <iostream>
#include <cmath>
using namespace std;

const int L = 12;

int main(void)
{
  float TP, VEL, DIS,LIT;

  cout << "Digite o tempo de viagem...: "; //como é calculado o tempo? minutos, horas?
  cin >> TP;
  cin.ignore(80,'\n');

  cout << "Digite a velocidade media..: ";
  cin >> VEL;
  cin.ignore(80,'\n');

  DIS = TP * VEL;
  LIT = DIS / L;

  cout << "A quantidade de litro usado nesta viagem foi de...: " << LIT << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar....";
  cin.get();

}
