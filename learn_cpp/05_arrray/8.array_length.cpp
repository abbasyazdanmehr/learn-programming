#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int a;
    cin >> a;
    int array[a];
    int array_len = *(&array + 1) - array;
    cout << array_len << endl;
    int array_len_better = sizeof(array) / sizeof(array[0]);
    cout << array_len_better << endl;
    return 0;
}
