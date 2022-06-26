#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;

//  read , write

int main()
{
    int b[5] = {10, 11, 12, 13, 14};

    ofstream f1("a.dat", ios::binary);

    f1.write((char *)b, 20);

    f1.close();

    ifstream f2("a.dat", ios::binary);

    f2.read((char *)b, 20);

    for (int i = 0; i < 5; i++)
        cout << b[i] << "  ";

    return 0;
}
