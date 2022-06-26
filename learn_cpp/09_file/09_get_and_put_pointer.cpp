/*
file pointer :
               get pointer
               put pointer
tellq ( )
tellp ( )

seekq ( len , origin )
seekp ( len , origin )

origin:
       ios::cur
       ios::beg
       ios::end
*/
#include <iostream>
using namespace std;
#include <fstream>
#include <conio.h>

int main()
{
    int a[3] = {5, 7, 8};
    ofstream f1("x", ios::binary);
    f1.write((char *)a, sizeof(a));
    f1.close();

    long start, end, size;
    ifstream f2("x", ios::binary);
    start = f2.tellg(); // start =0
    cout << start << endl;

    f2.seekg(0, ios::end);
    end = f2.tellg(); // end =12

    f2.close();

    size = end - start;
    cout << "size= " << size;

    return 0;
}

/*
main()
{
    ifstream f ("a", ios::binary|ios::ate);
    cout<< f.tellg();

    f.close();
}
*/
