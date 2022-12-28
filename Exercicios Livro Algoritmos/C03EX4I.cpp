//C03EX4I
#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
  int I;

  cout <<"Insira um numero..: " ;
  cin >> I;
  cin.ignore (80, '\n');

  cout << I <<" elevado ao quadrado e igual a " << pow(I, 2) << endl;
  cout << endl;
  cout << "Tecle <Enter> para encerrar....";
  cin.get();
  return 0;
}
