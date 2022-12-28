//C03EX4C - LOPA
#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14159;

int main(void)
{
  float V, R;

  cout << "Digite o valor do raio..: ";
  cin >> R;
  cin.ignore(80, '\n');

  V = PI * pow(R, 2);

  cout << "O valor do volume da lata e...: " << V << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar....";
  cin.get();

}
