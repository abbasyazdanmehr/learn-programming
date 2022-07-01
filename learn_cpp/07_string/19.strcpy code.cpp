// String     strcpy( )

#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib>  
using namespace std;

void  f(char *,const char *);

main()
{
  char  *s1;
  char  *s2="ali";
  
  f(s1,s2);
  
  cout<<s1;  //ali
  
  getch();
}
/*
void  f(char *a,const char *b)
{
	for( ;(*a=*b) !='\0'; a++, b++);
}
*/

void  f(char *a,const char *b)
{
	int i=0;
	for( ;(a[i]=b[i]) !='\0'; i++);
}




