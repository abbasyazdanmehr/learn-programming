#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    // if
    int x;
    cin >> x;
    if (x >= 0)
        cout << "positive";
    else
        cout << "negative";

    // else if
    if (x > 10)
    {
        cout << "x is greater than 10" << endl;
    }
    else if (x > 5)
    {
        cout << "x is greater than 5" << endl;
    }
    else if (x > 2)
    {
        cout << "x is greater than 2" << endl;
    }

    // nested ifs
    bool valid_username = true;
    bool valid_password = false;

    if (valid_username)
    {
        if (valid_password)
        {
            cout << "enter successfully!" << endl;
        }
        else
        {
            cout << "username or password don't match!" << endl;
        }
    }
    else
    {
        cout << "username not founded!" << endl;
    }

    return 0;
}
