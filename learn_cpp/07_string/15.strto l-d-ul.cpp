// String   strtol( )     strtod( )     strtoul( )    

#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib>  
using namespace std;

main()
{
	
  char  s[]="1234567ah89";
  char  *p;
  long  int  x;
  
  x=strtol(s,&p,10);
  
  cout<<x<<endl;    //1234567        
  cout<<p;         //ah89


  cout<<"\n\n=======================\n\n";
  
  char  s1[]="10afh5k";
  char  *p1;
  long  int  n;
  
  n=strtol(s1,&p1,16);
  
  cout<<hex<<n<<endl;     //10af        
  cout<<p1;               //h5k

 
 
  cout<<"\n\n=======================\n\n";
  char    s2[]="12.3abc45";
  char    *p2;
  double   d;
  
  d=strtod(s2,&p2);
  cout<<d<<endl;   //12.3     
  cout<<p2;        //abc45   
 

 
  getch();
}







