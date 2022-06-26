// file :  write and read (string , float)
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

main()
{
  char s[10];
  float x;

  ofstream f1("a");

  if (!f1)
    exit(0);

  cout << "enter:\n";

  while (cin >> s >> x)
    f1 << s << ' ' << x << ' ';

  f1.close();

  cout << "\n output: \n";

  ifstream f2("a");

  f2 >> s >> x;

  while (!f2.eof())
  {
    cout << s << "  " << x << endl;
    f2 >> s >> x;
  }

  f2.close();

  getch();
}
