#include <iostream>
#include <string>
#include <fstream>
#include "NFL.h"





using namespace std;

void menu()
{
	cout << "Player Records" << endl;
	cout << "1. Add Quarteerback" << endl;
	cout << "2. Add Runningback" << endl;
	cout << "3. Add Wide Reciever" << endl;
	cout << "4. Look up player by position" << endl;
	cout << "5. Look up player by name" << endl;
	cout << "5. Quit" << endl;


}

int main()
{
	int input = 0;

	playerInventory List;

	while (true)
	{
		menu();
		cout << "Enter your choice: ";
		cin >> input;

		if (input == 1)
		{
			player p;
			cout << "Enter first name: ";
			cin >> p.firstname;
		}
	}



	system("pause");
	return 0;
}