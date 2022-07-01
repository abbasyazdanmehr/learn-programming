// String     s.at(n)    s1.assign(s2)   s1.append(s2)  s.substr(n1,n2)   s.erase(n1,n2)   
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;


main()
{
  string s("abcde");    // string s="abcde";
  cout<<s.at(2);    //c   
  
  cout<<"\n---------\n";
 
  string s1;
  string s2("ali");
  s1.assign(s2);       // s1=s2;
  cout<<s1;    //ali     
  
  cout<<"\n---------\n";
  
  string  p("amir");
  p.append("ali");   // p=p+"ali";
  cout<<p;    //amirali     
  
  cout<<"\n---------\n";
  
  string  t("abcdefgh");
  cout<<t.substr(2,3);    //cde  
  
  cout<<"\n---------\n";
  
  string  s3("abcdefg");
  s3.erase(2,3);   //abfg
  cout<<s3;     
  
  
  getch();
}


