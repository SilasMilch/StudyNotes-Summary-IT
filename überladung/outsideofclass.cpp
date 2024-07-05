#include <iostream>

class Complex
{
public:
	double real, imag;

	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {};

	// Überladung des + Operators innerhalb der Klasse => dadurch lassen sich zwei Complex Objekte miteinander addieren. (Siehe Zeile 27)
	Complex operator + (const Complex& other) const
	{
		return Complex(real + other.real, imag + other.imag);
	}
};

// Überladung des << Operators außerhalb der Klasse => dadurch lassen sich Komplexe Zahlen ausgeben
std::ostream& operator<<(std::ostream& os, const Complex& c)
{
	os << c.real << " + "  << c.imag << "j";
	return os;
}

int main()
{
	Complex c1(3.0,4.0), c2(1.0, 2.0);
	Complex c3 = c1 + c2;	// Verwendet den überladenen + Operator

	std::cout <<"c1: " << c1 << std::endl;
	std::cout <<"c2: " << c2 << std::endl;
	std::cout <<"c3: " << c3 << std::endl;	// Verwendet den überladenen Operator

	return 0;
}


/**
 * In diesem Beispiel wird der + Operator innerhalb der Klasse Complex überladen, um die
 * Addition von zwei Complex Objekten zu ermöglichen. Der << Operator wird außerhalb der
 * Klasse überladen, um eine benutzerdefinierte Ausgabe der Complex Objekte zu ermöglichen.
 */


/**
 * Überladung außerhalb der Klasse bezieht sich auf freie Funktionen oder Operatoren, die außerhalb einer Klasse definiert werden
 * und normalerweise benutzerdefinierten Typen betreffen.
 */
