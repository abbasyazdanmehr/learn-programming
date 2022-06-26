// read , write
#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>

using namespace std;

struct student
{
	char name[10];
	int id;
};

main()
{
	student a[3]; // darim
	student b[3];

	for (int i = 0; i < 2; i++)
	{
		cout << "name: ";
		cin.getline(a[i].name, 4);
		cin.getline(a[i].name, 4);
		cout << "id: ";
		cin >> a[i].id;
		cout << endl;
	}

	ofstream f1("x", ios::binary);
	for (int i = 0; i < 2; ++i)
		f1.write((char *)&a[i], sizeof(student));

	f1.close();
	cout << "\n output: \n\n";

	ifstream f2("x", ios::binary);
	for (int i = 0; i <= 2; ++i)
	{
		f2.read((char *)&b[i], sizeof(student));
		cout << b[i].name << setw(5) << b[i].id << endl;
	}
	f2.close();

	return 0;
}
