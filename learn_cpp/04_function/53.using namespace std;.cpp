// namespace
#include <iostream>
#include <conio.h>
#include <string>

namespace A
{
	void f() { std::cout << "A \n"; }
}

namespace B
{
	void f() { std::cout << "B\n"; }
}
void f()
{
	std::cout << "C \n";
}

int main()
{
	using B::f;
	// using namespace B; this does not work here I don't konw why?

	A::f(); // A

	f(); // B

	::f(); //  C

	return 0;
}
