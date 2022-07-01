// String    strcat(s1,s2)     strncat(s1,s2,3)
#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib>
using namespace std;

main()
{
  char s1[] = "ali";
  char s2[] = "reza";

  strcat(s1, s2);
  strncat(s1, s2, 3);
  cout << s1; // alireza

  return 0;
}
