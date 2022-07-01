// String    strcpy(s1,s2)   strncpy(s1,s2,3)
#include <iostream>
#include <conio.h>
#include <cstring>
//#include <cstdlib>
using namespace std;

main()
{
  char s1[] = "abc";
  char s2[] = "defgh";

  // strcpy(s1, s2);
  strncpy(s1, s2, 2);

  cout << s1 << endl; // dec

  return 0;
}
