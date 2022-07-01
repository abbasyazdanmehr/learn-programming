// String     memset(s,ch,n)   memcpy(s1,s2,n)      memcmp(s, )       memmove(s, )      memchr(s, )   

#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib>  
using namespace std;

main()
{
   char r[ ] ="abcd";
   cout<<static_cast<char *> (memset(r,'f',3));   // fffd

   cout<<"\n.......\n";
	   
   char a1[10]="abcd";
   char a2[10]= "hij";
   memcpy(a1,a2,2);
   cout<<a1;    //hijd
     
   cout<<"\n.......\n";
   
   cout<<memcmp("abcd","abef",3);   // -1
   
   cout<<"\n.......\n";
      
   char s[ ] ="abcde";
   cout<<static_cast<char *> (memmove(s,&s[1],2));  // bccde
      
   cout<<"\n.......\n";
   
   char t[ ] ="abcdcef";
   cout<<static_cast<char *> (memchr(t,'c',3));  // cdcef
   
   
   
  getch();
}







