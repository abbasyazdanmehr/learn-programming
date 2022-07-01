// String     cin.putback
#include <iostream>
//#include <conio.h>
//#include <cstring>
using namespace std;

main()
{
  char  ch;
  
  while(cin.get(ch))
  {
  	if (ch=='b')
  	  cin.putback('f');
    else
  	  cout<<ch;
  }
  
}







