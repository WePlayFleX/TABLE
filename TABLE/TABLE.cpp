#include <iostream>

using namespace std;

void Starline();
void Repchar(char, int);

int main()
{
	Repchar('-', 43);
	/*Starline();*/
	cout << "Data type     Range " << endl;
	Repchar('=', 23);
	/*Starline();*/
	cout << "char	-128....127 " << endl
		<< "short	-32,768....32,767 " << endl
		<< "int		System dependent " << endl
		<< "long	-2,147,483,648....2,147,483,647 " << endl;
	Repchar('-', 43);
	/*Starline();*/

	system("pause");
	return 0;
}

void Starline()
{
	for (int i = 0; i < 45; i++)
	{
		cout << '*';
	}
	cout << endl;
}

void Repchar(char ch, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << ch;
	}
	cout << endl;
}