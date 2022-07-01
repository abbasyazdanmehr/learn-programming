#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// you should write your function sign in this part of code if your function is after main function
// to compiler found them in end of code
// this can clean your code and show to you the interface that you have

// prototypes:
void print_menu();
void print(string);
int pow3(int);
int sum(int, int);
int input_int();
float circle_area(float);
float piston_volume(float, float);
int increment_counter();
int price(int a = 2, int b = 3, int c = 4);
void change_name(string &);
void change_second_element(int[]);
int fibo(int);
int pow2(int);
double pow2(double);
string pow2(string);
int pow2(int, int);
void print_interval(int, int);

// head functions:

// template: template can be as very general overloading function
template <class T>
T get_max(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

template <class T, class U>
T plus1(U a)
{
    T b = a + 1;
    return b;
}

// you can use global varialbes here
// you access to these variables in all function
// if you have that name in the function you can use :: for global ones

// global varialbe:
double pi = 3.1415;
int x = 10;

int main(int argc, char const *argv[])
{
    // void function with no output
    // and just printing something
    print_menu();
    print("Hello World");

    // function make the code reusable
    for (size_t i = 0; i < 20; i++)
    {
        cout << pow3(i) << endl;
    }

    cout << sum(2, 5) << endl;

    // using cin in function
    int a = input_int();
    cout << "inputted is " << a << endl;

    // using another function in new function
    cout << piston_volume(2.5, 4);

    // global variable
    int x = 5;
    cout << x << endl;
    cout << ::x << endl;

    // optional arguments
    cout << price(7, 9, 10) << endl;
    cout << price(7, 9) << endl;
    cout << price(7) << endl;
    cout << price() << endl;

    // call by reference
    string name = "ali";
    cout << name << endl;
    change_name(name);
    cout << name << endl;

    // array is defualt call by reference
    int array[] = {1, 3, 4, 5, 6};
    cout << array[2] << endl;
    change_second_element(array);
    cout << array[2] << endl;

    // recursive function
    cout << fibo(5) << endl;

    // function overloading
    cout << pow2(10) << endl;
    cout << pow2(10.1) << endl;
    cout << pow2("ali") << endl;
    cout << pow2(1, 5) << endl;

    // template
    cout << get_max<int>(2, 3) << endl;
    cout << get_max<char>('a', 'b') << endl;

    cout << plus1<int, char>('a') << endl;
    cout << plus1<char, int>(65) << endl;

    // recursive understanding
    print_interval(2, 10);

    return 0;
}

void print_menu()
{
    cout << "This is menu :)" << endl;
}

void print(string s)
{
    cout << s << endl;
}

int pow3(int x)
{
    return x * x * x;
}

int sum(int a, int b)
{
    return a + b;
}

bool is_even(int a)
{
    return a % 2 == 0;
}

int input_int()
{
    int x;

    while (true)
    {
        try
        {
            cin >> x;
            break;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return x;
}

float circle_area(float r)
{
    return pi * r * r;
}

// we can use another function in new function
float piston_volume(float r, float h)
{
    return circle_area(r) * h;
}

int increment_counter()
{
    // static varialbe just execute one time in all of program runtime
    static int counter = 0;
    counter++;
    return counter;
}

// we can use optional argument
// you must do this in prototype
int price(int a, int b, int c)
{
    return a + b + c;
}

// call by reference
void change_name(string &name)
{
    name = "reza";
}

// array is default call by reference
void change_second_element(int a[])
{
    a[2] = 2;
}

// recursive function
int fibo(int n)
{
    if (n == 0 or n == 1)
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}

// function overloading
// you can't overload a function just by output in cpp
int pow2(int a)
{
    return a * a;
}

double pow2(double a)
{
    return a * a * a;
}

string pow2(string a)
{
    return a + a;
}

int pow2(int a, int b)
{
    return (a + b) * (a - b);
}

// recursive understanding
void print_interval(int x, int n)
{
  if (x <= n)
  {
    print_interval(x + 1, n);
    cout << x << endl;
  }
}
// f(2,6)   f(3,6)  f(4,6)  f(5,6)  f(6,6)  f(7,6)