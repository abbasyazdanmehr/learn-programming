// String     cin.peek  cin.ignore
#include <iostream>
//#include <conio.h>
//#include <cstring>
using namespace std;

main()
{
  char ch;

  while (cin.get(ch))
  {
    cout << ch;

    while (cin.peek() == 'b')
      cin.ignore(1, 'b');

    if (ch == '.')
      break;
  }
}
