/**
 * Programm um protected und public zu erklären.
 */
#include <iostream>
using namespace std;

//Basisklasse
class Tier
{
protected:
	string name;

public:
	Tier(string n) : name(n) {}

	virtual void gibLaut() {
		cout << name << " macht ein Geräusch" << endl;
	}
};
/**
 * Das Attribut name und die Methode gibLaut sind protected. Das bedeutet, dass sie in der Klasse Tier und in allen abgeleiteten Klassen von Tier zugreifbar sind.
 * Der Konstruktor Tier(string n) initialisiert das Attribut name.
 */


//Abgeleitete Klasse
class Hund : public Tier {
public:
	Hund(string n) : Tier(n) {}

	void gibLaut() override {
		cout << name << " bellt" << endl;
	}

	void zeigeNameUndLaut()
	{
		cout << "Der Name des Hundes ist: " << name << endl;
		gibLaut();
	}
};
/**
 * Die Klasse Hund erbt öffentlich (public) von Tier und kann somit auf das protected Attribut name und die Methode gibLaut zugreifen.
 * Die Methode gibLaut wird in Hund überschrieben, um spezifisches Verhalten für Hund zu implementieren.
 * Die Methode zeigeNameUndLaut gibt den Namen des Hundes aus und ruft die Methode gibLaut auf.
 */

int main()
{
	Hund meinHund("Bello");
	meinHund.zeigeNameUndLaut();
	return 0;
}


