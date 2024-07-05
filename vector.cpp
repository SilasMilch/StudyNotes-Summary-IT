#include <iostream>
#include <vector>
#include <string>
using namespace std;

/**
 * Ein Vector Container ist beispielsweise eine dynamische Alternative für Arrays,
 * wobei man die Elemente verwalten kann.
 */


int main()
{
	vector<int> zahlen;

	zahlen.push_back(10);  //Element hinzufügen
	zahlen.push_back(20);
	zahlen.push_back(30);
	zahlen.push_back(40);

	cout << "Die Elemente im Vector sind: ";

	for(int i = 0; i < zahlen.size(); ++i)
	{
		cout << zahlen[i] << " ";
	}
	cout << endl;

	zahlen.erase(zahlen.begin() + 2); //Element löschen

	cout << "Nach dem Löschen des Elements an Position 2: ";
	for(int i = 0; i < zahlen.size(); ++i)
	{
		cout << zahlen[i] << " ";
	}

	cout << endl;

	cout << "Das Element an Position 1 ist: " << zahlen[1] << endl;
	return 0;
}
