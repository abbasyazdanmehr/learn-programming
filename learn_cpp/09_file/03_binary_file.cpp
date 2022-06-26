// file : write and read in binary file
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

main()
{
   char  ch;
   ofstream  f1("a", ios::binary);
   if(!f1)
      exit(0);
   
   
   cout<<"enter:\n";
   
   do{
   	 cin.get(ch);
   	 if(ch=='\n')  break;
   	 f1.put(ch);
   } while(1);
   
   f1.close();
   
   
   cout<<"\n output: \n";
   
   ifstream   f2("a"  , ios::binary);
   f2.get(ch);
   while(!f2.eof())
   {
   	cout<<ch;
   	f2.get(ch);
   }
   
   f2.close();

	getch();
}
