// array of String     
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
/*
    0  1  2  3  4   5  6  7  8  9  10  11 
 0  t  a  h  a  \0
 1  s  a  r  a  \0
 2  a  m  i  r  a   l  i  a  b  a  s  \0
 
*/
  
main()
{
 
  char  s[3][12]={"taha","sara","amiraliabas"};
  cout<<sizeof(s);    //36
 
  
  cout<<endl;
  
  char *s2[3]={"taha","sara""amiraliabas"};
  cout<<sizeof(s2);  // ?
 
 
 
 
 
 
 
 
 /* 
  char name[3][10];
  
  for(int i=0 ; i<=2; i++)
  {
  	 cin.get(name[i],9);
     cin.get();
  }
  
  cout<<"\n-------------\n";
  
  cout<<name[1];
  cout<<endl;
  cout<<name[0][1];
  */
 
  
  getch();
}


