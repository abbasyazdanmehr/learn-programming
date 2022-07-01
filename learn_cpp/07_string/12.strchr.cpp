// String   strchr(string,char)   strstr

#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib>  
using namespace std;

main()
{
  char  s[]="alireza";
  char  *p;
  p=strchr(s,'r');
  cout<<p<<endl;   //reza


 
  char  s2[]="alireza";
  char  *p2;
  p2=strstr(s2,"irp");
  cout<<p2;   //ireza
 
 
  getch();
}







