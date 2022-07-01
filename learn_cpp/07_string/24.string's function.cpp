// String     
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;


main()
{
  string s("ab cde fg");
  int p;
 
  p=s.find(" ");   // p=2      
 
  while(p!=-1)
  {
     s.replace(p,1,".");  
     p=s.find(" ");        
  }
 
  
  cout<<s;   //ab.cde.fg
  
  getch();
}


