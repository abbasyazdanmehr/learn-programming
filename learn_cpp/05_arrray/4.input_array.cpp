// Array

#include <iostream>
#include <conio.h>
using namespace std;

main()
{
  int a[7];

  for (int i = 0; i <= 6; i++)
    cin >> a[i];

  cout << endl
       << "output:" << endl;
  for (int j = 0; j <= 6; j++)
    cout << a[j] << "   ";

  return 0;
}
