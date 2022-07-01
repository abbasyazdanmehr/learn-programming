// String   strspn()     strcspn

#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib>  
using namespace std;

main()
{
   const char *s1 = "abcdefgh";
   const char *s2 = "dbahc";
   
   cout << strspn( s1, s2 ) ;   //4
   
  
   cout<<"\n------\n"  ;
   
   cout << strcspn( "abcde", "hdf" ) ;  //3
  
	
  
 
  getch();
}







