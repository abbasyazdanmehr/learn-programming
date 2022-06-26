#include <iostream>
#include <conio.h>
using namespace std;
main()
{
  char ch;
  ch = 'A';
  cout << ch + 1 << endl;
  cout << (char) ch + 1 << endl; // this is not logical I think
  cout << (char) (ch + 1) << endl; // the upper line is logical my friend :)
  ch = ch + 1;
  cout << ch;
  return 0;
}
