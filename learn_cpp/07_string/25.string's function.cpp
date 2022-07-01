// String     
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;


main()
{
  char s[81];
  cin.get(s,80);
  
  int k;
  cin >>k;
  
  strcpy(&s[k] , &s[k+1]);
  
  cout<<s;  
  
  getch();
}


