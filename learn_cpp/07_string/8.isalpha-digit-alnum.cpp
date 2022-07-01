// String     isalpha  isdigit  isalnum
#include <iostream>
//#include <conio.h>
//#include <cstring>
//#include <cstdlib>
using namespace std;

main()
{
  char ch;
  int ca = 0, cd = 0, can = 0;

  while (cin.get(ch))
  {
    if (isalpha(ch))
      ++ca;
    if (isdigit(ch))
      ++cd;
    if (isalnum(ch))
      ++can;
    if (ch == '.')
      break;
  }
  cout << "ca=" << ca << endl;
  cout << "cd=" << cd << endl;
  cout << "can=" << can << endl;
}
