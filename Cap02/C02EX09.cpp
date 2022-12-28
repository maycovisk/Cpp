//C02EX09.CPP

#include <iostream> //i o stram
#include <iomanip>  //i o manip
using namespace std;

int main(void)
{
  cout << "10 em decimal     = " << dec << 10 << endl;
  cout << "\n";
  cout << "10 em octal       = " << oct << 10 << endl;
  cout << "10 em hexadecimal = " << hex << 10 << endl;

  cout << setiosflags(ios::uppercase); //"poe" em maiusculo
  cout << "\n";
  cout << "10 em octal       = " << oct << 10 << endl;
  cout << "10 em hexadecimal = " << hex << 10 << endl;
  cout << resetiosflags(ios::uppercase); //retira em maiusculo

  cout << setiosflags(ios::showbase); //"poe"
  cout << "\n";
  cout << "10 em octal       = " << oct << 10 << endl;
  cout << "10 em hexadecimal = " << hex << 10 << endl;
  cout << resetiosflags(ios::showbase);

  cout << setiosflags(ios::uppercase);
  cout << "\n";
  cout << "10 em octal       = " << oct << 10 << endl;
  cout << "10 em hexadecimal = " << hex << 10 << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar...";
  cin.get();
  return 0;
}
