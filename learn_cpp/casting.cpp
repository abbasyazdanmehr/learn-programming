#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // () casting
    char ch;
    ch = 'A';
    cout << ch + 1 << endl;
    cout << (char)ch + 1 << endl;   // this is not logical I think
    cout << (char)(ch + 1) << endl; // the upper line is logical my friend :)
    ch = ch + 1;
    cout << ch << endl;
    cout << (float)(2 + 2) / 3;

    // auto casting
    int numberI = 10;
    char character1 = 'c';
    float numberF = 2.2;
    double numberD = 3.2334341;
    int result = (numberI + character1) * (numberF - numberD);
    cout << result << endl;
    cout << (2 + 2) / 3 << endl;
    cout << (2 + 2) / 3.0 << endl;

    // assign casting
    char char_result = result;
    cout << result << endl;
    cout << char_result << endl;

    //






    return 0;
}
