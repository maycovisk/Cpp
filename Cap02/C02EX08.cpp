//C02EX08.CPP

#include <iostream> //i o stram
#include <iomanip>  //i o manip
using namespace std;

int main(void)
{
  float HT,VH, PD, TD, SB, SL;

  cout << setprecision (2); // "poe" casas decimais
  cout << setiosflags (ios::right); //"poe" da direita para esquerda
  cout << setiosflags (ios::fixed); //"poe" fixar ponto

  cout << "Entre a quantidade de horas trabalhadas...: ";
  cin >> HT;
  cin.ignore(80, '\n');

  cout << "Entre o valor da hora de trabalho...: ";
  cin >> VH;
  cin.ignore(80, '\n');

  cout << "Entre o valor do percentual de desconto...: ";
  cin >> PD;
  cin.ignore(80,'\n');

  SB = HT * VH;
  TD = (PD / 100) * SB;
  SL = SB - TD;

  cout << "\n"; //pular uma linha
  cout << "Salario Bruto...: " << setw(8) << SB << endl;
  cout << "Desconto........: " << setw(8) << TD << endl;
  cout << "Salario Liquido.: " << setw(8) << SL << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar...";
  cin.get();
  return 0;
}
