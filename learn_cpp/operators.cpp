#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // Arithmetic Operators
    cout << 3 + 3 << endl;
    cout << 4 - 3 << endl;
    cout << 4 * 3 << endl;
    cout << 4 / 3 << endl;
    cout << 4 / 3.0 << endl;
    cout << 10 % 3 << endl;

    // Augmented Operators
    int x = 0;
    x += 1;
    x *= 2;
    //...
    cout << x << endl;

    // Operators Precedence
    // See below link:
    // https://en.cppreference.com/w/cpp/language/operator_precedence

    // Logical Operators
    bool is_username_valid = true;
    bool is_password_valid = false;

    bool is_valid = is_username_valid and is_password_valid;
    cout << is_valid << endl;
    cout << !is_valid << endl;

    bool is_cold = true;
    bool is_cloudy = true;

    bool is_rainy = is_cold or is_cloudy;
    cout << is_cloudy << endl;

    // Comparison Operators
    int temperature = 20;
    cout << (temperature > 10) << endl;
    cout << (temperature < 10) << endl;
    cout << (temperature == 21) << endl;
    cout << (temperature != 22) << endl;
    cout << (temperature <= 20) << endl;
    cout << (temperature >= 20) << endl;

    // Bitwise Operators
    cout << (10 | 30) << endl;
    cout << (10 & 30) << endl;
    cout << (10 >> 2) << endl;
    cout << (10 ^ 30) << endl;

    // Ternary Operator
    int max_num = (10 > 20) ? 10 : 20;


    cout << "End of Code" << endl;
    return 0;
}
