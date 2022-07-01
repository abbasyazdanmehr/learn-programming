#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    // for
    for (int i = 100; i >= 40; i = i - 3)
        cout << i << '\t';

    cout << endl;

    // blank for
    int k;
    for (k = 1; k <= 30; k += 3)
        ;
    cout << k << endl;

    cout << endl;

    // more than 1 varialble
    for (int i = 1, j = 3; i <= j; i++, j--)
        cout << i << '*' << j << "=" << i * j << endl;

    // character counter
    char ch;
    int count;
    for (count = 1; ch = cin.get() != '.'; count++)
        ;

    cout << count << endl;

    // continue: go first of loop
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
            continue;
        else
            cout << i << endl;
    }

    cout << endl;

    // break: go out of loop
    for (int i = 1; i <= 20; i++)
    {
        if (i == 7)
            break;
        else
            cout << i << endl;
    }

    cout << endl;

    return 0;
}
