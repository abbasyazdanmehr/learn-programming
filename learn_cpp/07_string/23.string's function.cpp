// String     
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;


main()
{
  string s("abdef.");
 
  int k;
  k=s.find("b");  //k=1
  s.replace(k+1,0,"c");
  cout<<s;    //abcdef.
 
 
  
  
  getch();
}


