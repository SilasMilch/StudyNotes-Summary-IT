#include <iostream>

// Abstrakte Oberklasse
class Fahrzeug {
public:
    // Reine virtuelle Funktion
    virtual void beschreibe() const = 0;

    // Virtueller Destruktor
    virtual ~Fahrzeug() {}
};

// Abgeleitete Klasse Auto
class Auto : public Fahrzeug {
public:
    void beschreibe() const override {
        std::cout << "Dies ist ein Auto." << std::endl;
    }
};

// Abgeleitete Klasse Fahrrad
class Fahrrad : public Fahrzeug {
public:
    void beschreibe() const override {
        std::cout << "Dies ist ein Fahrrad." << std::endl;
    }
};

int main() {
    // Fahrzeug kann nicht direkt instanziiert werden
    // Fahrzeug f; // Fehler: Objekt von abstrakter Klasse

    // Instanziieren der abgeleiteten Klassen
    Auto auto1;
    Fahrrad fahrrad1;

    // Zeiger auf die abstrakte Oberklasse
    Fahrzeug* fahrzeug1 = &auto1;
    Fahrzeug* fahrzeug2 = &fahrrad1;

    // Polymorpher Aufruf der beschreibe-Methode
    fahrzeug1->beschreibe();
    fahrzeug2->beschreibe();

    return 0;
}

/**
  *Abstrakte Oberklasse Fahrzeug:
  * Die Klasse Fahrzeug ist eine abstrakte Klasse, da sie mindestens eine rein virtuelle Funktion (beschreibe) enthält.
  *Die Methode beschreibe() ist eine rein virtuelle Funktion, was durch = 0 am Ende der Deklaration angezeigt wird.
  *Der virtuelle Destruktor ~Fahrzeug() stellt sicher, dass der Destruktor der abgeleiteten Klassen korrekt aufgerufen wird, wenn ein Objekt gelöscht wird.
  */
