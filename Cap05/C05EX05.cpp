//C05EX05.cpp
//Programa Fatorial

#include <iostream>
#include <cctype>
using namespace std;

int fatorial (int N)   //tipo de variavel indica ser uma função
{
  int I, FAT = 1;
  for (I = 1; I <= N; I++)
    FAT *= I;
  return FAT;         //retornar algo indica ser uma função
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

  cout << "Calculo de fatorial\n";
  cout << "\nEntre um valor inteiro: "; cin >> X;
  cin.ignore(80, '\n');

  cout << "\nFatorial de " << X << " = a: ";
  cout << fatorial(X) << endl;

  pausa();
  return 0;
}
