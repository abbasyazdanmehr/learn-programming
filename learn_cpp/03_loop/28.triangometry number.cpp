#include <iostream>
#include <conio.h>
using namespace std;

main()
{
     int i, j, k, n;

     cin >> n;

     for (i = 1; i <= n; i++)
     {
          for (j = 1; j <= n - i; j++)
               cout << "\t";

          for (k = 1; k <= 2 * i - 1; k++)
               cout << k << "\t";
          cout << endl;
     }

     return 0;
}
/*
                 1
            1    2     3
     1	    2    3     4     5
1    2      3    4     5     6    7

*/
