#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Example
{
public:
	void display(int i)
	{
		std::cout << "Integer: " << i <<std::endl;
	}

	void display(double d)
	{
		std::cout <<"Double:" << d << std::endl;
	}

	void display(std::string s)
	{
		std::cout << "String: " << s << std::endl;
	}
};

int main()
{
	Example ex;
	ex.display(5);			// Ruft display(int) auf
	ex.display(3.14);		// Ruft display(double) auf
	ex.display("Hello");	// Ruft display(std::string) auf
	return 0;
}



/**
 * Überladung innerhalb einer Klasse
 * => mehrere Methoden haben den gleichen Namen jedoch mit unterschiedlichen Parametern
 */
