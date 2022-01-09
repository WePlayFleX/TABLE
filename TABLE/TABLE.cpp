#include <iostream>

using namespace std;

void Starline();

int main()
{
	Starline();
	cout << "Data type     Range " << endl;
	Starline();
	cout << "char	-128....127 " << endl
		<< "short	-32,768....32,767 " << endl
		<< "int		System dependent " << endl
		<< "long	-2,147,483,648....2,147,483,647 " << endl;
	Starline();

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