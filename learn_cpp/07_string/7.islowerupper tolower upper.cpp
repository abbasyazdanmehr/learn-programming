// String     is lower/upper  to lower/upper
#include <iostream>
//#include <conio.h>
//#include <cstring>
//#include <cstdlib>
using namespace std;

main()
{
  char ch;

  while (cin.get(ch))
  {
    if (islower(ch))
      cout << char(toupper(ch));
    else
      cout << ch;
  }

  return 0;
}
