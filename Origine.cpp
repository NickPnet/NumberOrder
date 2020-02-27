#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	while (true)
	{
		string order;
		int *Array = new int[100];
		int *ptrCC = new int;
		*ptrCC = 0;


		cout << "SORTING PROGRAM!\n\nChose crescent or decrescent\n\n";
		cin >> order;
		cout << "insert numbers, put a 0 when finished\n\n";

		for (int i = 0; i < 100; i++)
		{
			cin >> Array[i];

			if (Array[i] == 0) {
				break;
			}
			(*ptrCC)++;
		}
		
		if (order == "crescent")
		{
			for (int i = 0; i <= (*ptrCC); i++)
			{
				for (int j = i + 1; j <= (*ptrCC); j++)
				{
					if (Array[i] > Array[j])
					{
						int temp = Array[i];
						Array[i] = Array[j];
						Array[j] = temp;
					}
				}
			}
			for (int i = 1; i <= *ptrCC; i++)
			{

				cout << endl << Array[i];
			}
		}
		else if (order == "decrescent")
		{
			for (int i = 0; i <= (*ptrCC); i++)
			{
				for (int j = i + 1; j <= (*ptrCC); j++)
				{
					if (Array[i] < Array[j])
					{
						int temp = Array[i];
						Array[i] = Array[j];
						Array[j] = temp;
					}
				}
			}
			for (int i = 0; i <= *ptrCC-1; i++)
			{

				cout << endl << Array[i];
			}
		}
	
		cout << endl <<endl;

		delete[]Array;
		delete ptrCC;

		while (true)
		{
			cout << "press Enter to continue the exercise, press ESC to close the program\n";

			int control = _getche();
			if (control == 13) {
				system("CLS");
				break;
			}
			else if (control == 27) {
				system("CLS");
				return 0;
			}
			else if (control != 27 || _getche() != 13) {
				cout << "\nIncorrect caracter\n";
			}
		}
	}
}