// Recursive Function

#include <iostream>
#include <conio.h>
using namespace std;


void f(int ,int );

int main()
{
   int n,k;
   cout<<"number : ";
   cin>>n;
   cout<<"the new base : ";
   cin>>k;  
   f(n,k); 
      
  getch() ;
} 

void f(int n,int b)
{
	if(n>0)
	{
		f(n/b,b);
		cout<<n%b;  
	}
}

