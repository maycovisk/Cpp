// C09EX01.CPP

#include <iostream>
#include <fstream> //file
using namespace std;

int main(void)
{

  ofstream ARQTXT;  //ofstram ? uma classe da fstream

  ARQTXT.open("ARQTXT.XXX", ios_base::trunc);  //open metodo de abertura (subrotina) - trunc se o arquivo n?o existe eu crio se existe eu deleto e crio
  ARQTXT.close();

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
