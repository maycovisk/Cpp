//C06EX02.cpp
#include <iostream>
using namespace std;

int main(void)
{

    int IDADE = 25;
    int *PIDADE = NULL;

    PIDADE = &IDADE;

    cout << "IDADE = " << IDADE << " | End: = " << &IDADE;
    cout << endl;
    cout << "PIDADE = " << *PIDADE;
    cout << " | End: = " << &PIDADE << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;
}
