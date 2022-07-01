// array of String     
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
  
main()
{
  char name[3][10];
  
  for(int i=0 ; i<=2; i++)
  {
  	 cin.get(name[i],9);
     cin.get();
  }
  
  cout<<"\n-------------\n";
  
  cout<<name[2];
  cout<<endl;
  cout<<name[1][2];
  
 
 
  
  getch();
}


