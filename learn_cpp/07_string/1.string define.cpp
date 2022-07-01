// String
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  char a[4] = {'a', 'l', 'i', '\0'};
  cout << a << endl;

  char b[4] = "ali";
  cout << b << endl;

  char* c = "ali"; // this has warning :)
  cout << c;
}
