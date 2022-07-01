#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // while
    int i = 1;
    while (i <= 3)
    {
        cout << i << endl;
        i++;
    }

    // break: go out of loop
    int c = 2;
    while (true) {
        if (c == 10)
            break;
        
        cout << c << endl;
        c++;        
    }

    // continue: go first of loop
    int k = 1;
    while (k != 10)
    {
        if (k % 2 == 0)
        {
            k++; // if you comment this line you can see infinite loop
            continue;
        }
        cout << k << endl;
        k++;
    }

    // nested while
    // ... :)
    


    return 0;
}
