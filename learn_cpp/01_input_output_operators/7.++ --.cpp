#include <iostream>
#include <conio.h>
using namespace std;
main()
{
  int a, b;

  a = 2;
  b = ++a * a++;

  cout << "a is " << a << ", b is " << b << endl;

  return 0;
}
