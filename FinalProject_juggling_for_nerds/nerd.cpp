/*
This program is 8185 - Juggling for Nerds
Jonathan Vasquez
CompSci II
Program will output a height that the juggler needs to throw objects in order to sucessfully juggle
Factors will include number of objects, the mass of the objects, time for juggler to catch and release object, time for juggler to reposition
*/

#include <iostream>
#include <iomanip>
#include <cctype>
#include "jugglerNerd.h"

using namespace std;

int main()
{	
	cout << "**********     Welcome to Juggling for Nerds     **********" << endl << endl;

	bool again = false;
	do {
		cout << "In order to find the height to throw objects when juggling, enter the \n"
			"number of objects, the mass of objects (kg), the time it takes to catch and then release the object (s)\n"
			"and the time it takes to reposition for the next catch.\nUse a space inbetween each input and press <enter>." << endl << endl;
		int a;
		double b, c, d;
		cin >> a >> b >> c >> d;
		Juggler nerd(a, b, c, d);
		nerd.print();
		cout << endl << "Would you like to enter information for another juggling nerd? (Y or N):\n";
		char yn;
		cin >> yn;
		yn = toupper(yn);

		while ((yn != 'Y') && (yn != 'N'))
		{
			cout << "Please enter a valid response:\n";
			cin >> yn;
			yn = toupper(yn);
		}
		if (yn == 'Y')
		{
			again = true;		
		}
		if (yn == 'N')
		{
			again = false;
		}
	}
	while (again == true);

	cout << " Thank you for visiting \"Juggling for Nerds\nHappy Juggling!\"" << endl;
	return 0;
	//Test change push to github
}