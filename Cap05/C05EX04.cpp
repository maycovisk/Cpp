//C05EX04.cpp
//Programa Fatorial

#include <iostream>
#include <cctype>
using namespace std;

void fatorial (int N, long int &FAT)   //void a frente de uma sub-rotina é um procedimento --- & indica referencia
{
  int I;
  FAT = 1;
  for (I = 1; I <= N; I++)
    FAT *= I;
  return;
}

void pausa (void)
{
  cout << endl;
  cout << "Tecle <Enter> para encerrar...";
  cin.get();
  return;
}

int main(void)
{
  int X;
  long int Y;

  cout << "Calculo de fatorial\n";
  cout << "\nEntre um valor inteiro: "; cin >> X;
  cin.ignore(80, '\n');

  fatorial(X, Y);
  cout << "\nFatorial de " << X << " = a: " << Y << endl;
  pausa();
  return 0;
}
