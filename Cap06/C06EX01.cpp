//C06EX01.cpp
#include <iostream>
using namespace std;

int main(void)
{

    int IDADE = 25;
    int *PIDADE = NULL;

    PIDADE = &IDADE;

    cout << "O valor idade " << IDADE << " esta armazenado";
    cout << " no endereco de memoria " << PIDADE << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;
}
