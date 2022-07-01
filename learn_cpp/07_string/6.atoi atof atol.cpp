// String     atoi  atof   atol
#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib> // atoi prototype
using namespace std;

main()
{
  char s1[] = "12";
  cout << atoi(s1) / 2 << endl;

  char s2[] = "45.7";
  cout << atof(s2) / 2 << endl;

  char s3[] = "1234";
  cout << atol(s3) / 2 << endl;

  return 0;
}
