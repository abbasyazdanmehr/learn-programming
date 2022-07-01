// String     cin.get
#include <iostream>
#include <conio.h>
//#include <cstring>
using namespace std;

main()
{
  char s[10];
  cin.get(s, 10, '\n');
  cout << s;

  return 0;
}
