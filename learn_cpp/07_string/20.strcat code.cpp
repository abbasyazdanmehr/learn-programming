// String     strcat

#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib>  
using namespace std;

void f(char*a,char*b);

int main()
{
  char*a;
  char*b;
  
  cin.getline(a,100);
  cin.getline(b,100);
  
  f(a,b);
  
  cout<<a;
  
  getch();
  return 0;
}

void f(char*a,char*b)
{
	while(*a!='\0')
		a++;
	for(;*a=*b;a++,b++);
}


