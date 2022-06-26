#include <iostream>
#include <conio.h>
using namespace std;
main()
{
  int  a = 5, d = 4;
  int b, c, f;
  
  b = (++a) * (a++); // this result is very bad :) don't use from ++ in one line
  f = (a++) * (++a);
  cout << "a is " << a << endl;
  cout << "f is " << f << endl;
  c = d-- * --d;
  cout << b << endl << c;
  
  return 0;
}
