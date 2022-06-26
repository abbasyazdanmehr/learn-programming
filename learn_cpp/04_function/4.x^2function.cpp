#include <iostream>
#include <conio.h>

using namespace std;

int f(int  );

main()
{
  int i,n;
  cin>>n;
  for(i=0; i<=n; i++)
      cout<<"i="<<i<<'\t' <<"f("<<i<<")="<<f(i)<<endl;
  getch();
}

int f(int  a)
{
	int s;
	s=a*a;
	return s;
}







