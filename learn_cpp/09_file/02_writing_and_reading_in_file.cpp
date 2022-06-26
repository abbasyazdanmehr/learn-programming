// file
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

main()
{
   
   // char  ch;
   // ofstream  f1("a.dat");
   // if(!f1)
   //    exit(0);


   // cout<<"enter:\n";

   // do{
   //     cin.get(ch);
   //     f1.put(ch);
   // } while(ch != '$');

   // f1.close();
   
   cout << "output: \n";
   char ch;
   ifstream f2("a.dat");
   f2.get(ch);
   while (!f2.eof())
   {
      cout << ch;
      f2.get(ch);
   }

   f2.close();

   return 0;
}
