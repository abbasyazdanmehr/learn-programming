#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    printf("this is how we print in C language! \n");
    cout << "and this is how we print in c++ language \n";

    int x = 10;
    cout.width(10);
    cout.setf(ios::right);
    cout.fill('m');
    cout << x;

    cout << endl;

    cout.width(8);
    cout.setf(ios::left);
    cout.fill('7');
    cout << "ali" << endl;
    

    cout << setw(20) << "taghi taghavi" << endl;
    cout << setw(10) << "ali alavi is here" << endl;

    
    return 0;
}
