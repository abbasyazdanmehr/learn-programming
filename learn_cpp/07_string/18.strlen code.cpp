// String     strlen

#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib>  
using namespace std;

int  f(const char *);

main()
{
 char  s[80] ;
 cout<<"enter s:";
 cin.get(s,80);
 cout<<f(s);
   
   
  getch();
}

int  f(const char *s)
{
	int c=0;
	for(; *s!='\0';s++)
	    c++;
	return c;
}






