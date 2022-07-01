#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string blue = "black_blue";

namespace color
{
    string red = "red";
    string blue = "blue";
    string green = "green";
    string yellow = "yellow";
    string orange = "orange";
}

int main(int argc, char const *argv[])
{
    cout << color::blue << endl;

    using color::green;
    cout << green << endl;

    using namespace color;
    cout << red << endl;
    cout << orange << endl;
    cout << yellow << endl;
    cout << green << endl;
    // cout << blue << endl; this has error because ambigious with global

    // global
    cout << ::blue << endl;

    return 0;
}
