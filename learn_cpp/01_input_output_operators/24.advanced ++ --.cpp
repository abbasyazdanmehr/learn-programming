#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int i;

  i = 1;
  cout << ++i << "   " << ++i << endl;

  i = 1;
  cout << ++i << "   " << --i << endl;

  i = 1;
  cout << i << "   " << ++i << endl;

  i = 1;
  cout << i << "   " << i++ << endl; // What is this fucking code :/ 

  i = 1;
  cout << ++i << "   " << i << endl;

  i = 1;
  cout << ++i << "   " << i++ << endl; // don't use from ++ and -- please :)

  i = 1;
  cout << i++ << "   " << ++i << endl;

  i = 1;
  cout << i++ << "   " << ++i << endl;

  i = 1;
  cout << i << "   " << ++i << "   " << ++i << endl;

  i = 1;
  cout << ++i << "   " << i++ << "   " << --i << endl;

  i = 1;
  cout << i << "   " << i++ << "   " << --i << endl;

  return 0;
}
