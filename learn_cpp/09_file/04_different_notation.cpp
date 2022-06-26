// file :  write and read (string)
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

main()
{
   char s[10];

   ofstream f1("a");

   if (!f1)
      exit(0);

   cout << "enter:\n";

   while (cin >> s)
      f1 << s << ' ';

   f1.close();

   cout << "\n output: \n";

   ifstream f2("a");

   f2 >> s;

   while (!f2.eof())
   {
      cout << s << endl;
      f2 >> s;
   }

   f2.close();

   return 0;
}
