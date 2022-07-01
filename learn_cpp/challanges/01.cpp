#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string statement;
    getline(cin, statement);
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word; cin.ignore();
        cout << statement.find('_');
    }



    cout << "end of code" << endl;
}