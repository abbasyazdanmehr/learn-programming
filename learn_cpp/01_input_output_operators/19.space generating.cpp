#include <iostream>
#include <conio.h>
using namespace std;
main()
{
  int x = 5;
  cout.width(10);
  // cout.setf(ios::left);
  cout.fill('m');
  cout << x;

  cout << endl;

  cout.width(8);
  // cout.setf(ios::left);
  cout.fill('7');
  cout << "ali";

  return 0;
}
