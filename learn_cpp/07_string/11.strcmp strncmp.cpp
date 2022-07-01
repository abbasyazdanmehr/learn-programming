// String   
// strcmp(s1,s2)   s1==s2  : 0       s1<s2  : -1           s1>s2 : +1
// strncmp
#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib>  
using namespace std;

main()
{
  char  s1[]="amirreza";
  char  s2[]="amirali";
  
  cout<<strncmp(s1,s2,5);
  
 
  
  getch();
}







