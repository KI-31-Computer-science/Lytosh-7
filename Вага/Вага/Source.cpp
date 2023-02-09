#include <iostream>

using namespace std;

int main ()
{
	int a, b, c;
	string action;
	bool exit = false;
	while (exit == false)
	{
		cout << "Choose a variant:";
		cout << endl << "0 - kilogram to pound";
		cout << endl << "1 - pound  to kilogram";
		cout << endl;
		cin >> a;
		if (a == 0)
		{
			cout << "Enter magnitude kilogram ";
			cout << endl;
			cin >> b;
			cout << endl << "Result in pound" << b * 2.205 << "pound"<< endl;
		}
		else if (a == 1)
		{
			cout << "Enter magnitude pound ";
			cout << endl;
			cin >> c;
			cout << endl << "Result in kilogram" << c / 2.205 << "kilogram" << endl;
		}
		cout << endl << "Do you want to exit?";
		cout << endl << "Yes or No" << endl;
	    cin >> action;
		if (action == "Yes")
		{
			exit = true;
		}
	}
}