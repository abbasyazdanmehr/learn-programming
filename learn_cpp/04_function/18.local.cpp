#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;


int x=10;

main()
{
   int x=5;
   cout<<x<<endl;
   {
   	int x =1;
   	cout<<"inner="<<x<<endl;
   	cout<<::x<<endl;
   	x++;
   }
   {
   	int x=8;
   	cout<<x<<endl;
   }
   cout<<x<<endl;
    
   getch();
}


