//C03EX4K
#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
  float R, D, C;


  cout << "Insira o valor de cotacao do dolar....: ";
  cin >> C;
  cin.ignore (80,'\n');

  cout << endl;
  cout << "Insira a quatidade de dolar...........: ";
  cin >> D;
  cin.ignore (80,'\n');

  R = C * D;

  cout << "A conversao do dolar em real e........: " << R << endl;

  cout << endl;
  cout << "Digite <Enter> para encerrar..." << endl;
  cin.get();
  return 0;

}
