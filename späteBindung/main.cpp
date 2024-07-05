#include <iostream>
#include <string>

class Base
{
public:
	virtual void show() // Virtuelle Funktion
	{
		std::cout << "Base class" << std::endl;
	}

	virtual ~Base() = default; //Virtueller Destruktor für saubere Aufräumung
};

class Derived : public Base
{
public:
	void show() override // Überschreiben der virtuellen Funktion
	{
		std::cout << "Derived class" << std::endl;
	}
};

void display(Base* obj)
{
	obj->show(); //Späte Bindung: zur Laufzeit wird entschieden, welche Methode aufgerufen wird
}

int main()
{
	Base base;
	Derived derived;

	Base* basePtr1 = &base;
	Base* basePtr2 = &derived;



	display(basePtr1); // Ausgabe: Base class
	display(basePtr2); // Ausgabe: Derived class

	return 0;
}




