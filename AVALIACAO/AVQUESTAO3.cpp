//AVQUESTAO3

#include <iostream>
//#include <cmath>
using namespace std;

int main(void)
{
    int X = 6;
    if ( X++ == 6 && X++ == 7 && ++X == 9)
        X = X;
    else
        X = X + X++;
    cout << X;

    return 0;
}
