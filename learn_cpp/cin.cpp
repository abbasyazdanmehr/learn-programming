#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main(int argc, char const *argv[])
{
    int n; // can be float, double, char, bool, ...
    cin >> n;
    cout << "you enter n = " << n << endl;

    char c;
    cin >> c;
    cout << "you enter c = " << c << endl;

    string name;
    // sometimes need to getline to work this input
    getline(cin, name);
    getline(cin, name);
    cout << "you entered name = " << name << endl;

    return 0;
}
