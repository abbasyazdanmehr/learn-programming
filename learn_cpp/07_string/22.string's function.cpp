// String   :   s.length ( )   s.find(ch)   s.replace(n1,n2,str)   s1.swap(s2)    
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;


main()
{
  string s("abcde");
  cout<<s.length( );   //5
  
  cout<<"\n-------------\n";
  
  string t("abcde");
  cout<<t.find("d");   //3
  
  cout<<"\n-------------\n";
  
  string w("abcdef");
  cout<<w.replace(1,3,"hk");  //ahkef
  
  cout<<"\n-------------\n";
  
  string s1("one");
  string s2("two");
  s1.swap(s2);
  cout<<s1<<endl;  //two
  cout<<s2;        //one
  
  getch();
}


