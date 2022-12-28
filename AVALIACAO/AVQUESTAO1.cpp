//AVQUESTAO1
//Elaborar um programa em linguagem C++ que a partir da definição de valores reais calcule e apresente
//de forma formatada sob a máscara 99999.99 o valor obtido a partir da expressão aritimética.

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    float R, AX1, BY2, H7;

    cout << setprecision(2);
    cout << setiosflags(ios::right);
    cout << setiosflags(ios::fixed);

    cin >> AX1;
    cin >> BY2;
    cin >> H7;

    R = AX1 * BY2 - H7;

    cout << setw(8) << R << endl;

    return 0;
}
