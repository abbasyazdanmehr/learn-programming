// String   strtok(s,ch)

#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib>  
using namespace std;

main()
{
  char  s[] ="I am abbas.";
 
  char  *p;
  
  p=strtok(s," ") ;
  
  int c=0;
  
  do{
  	 ++c;
  	 cout<<p<<endl;
  	 p=strtok('\0'," ");
  } while(p!='\0');
  
  cout<<"\n\n number token="<<c;
  

  
  
  
  getch();
}







