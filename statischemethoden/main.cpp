#include <iostream>

class Mathematik {
public:
    // Statische Methode zur Addition
    static int addiere(int a, int b) {
        return a + b;
    }

    // Statische Methode zur Subtraktion
    static int subtrahiere(int a, int b) {
        return a - b;
    }

    // Statische Methode zur Multiplikation
    static int multipliziere(int a, int b) {
        return a * b;
    }

    // Statische Methode zur Division
    static double dividiere(int a, int b) {
        if (b == 0) {
            std::cerr << "Fehler: Division durch Null!" << std::endl;
            return 0.0;
        }
        return static_cast<double>(a) / b;
    }
};

int main() {
    // Aufruf der statischen Methoden der Klasse Mathematik
    int a = 10;
    int b = 5;

    std::cout << "Addition: " << Mathematik::addiere(a, b) << std::endl;
    std::cout << "Subtraktion: " << Mathematik::subtrahiere(a, b) << std::endl;
    std::cout << "Multiplikation: " << Mathematik::multipliziere(a, b) << std::endl;
    std::cout << "Division: " << Mathematik::dividiere(a, b) << std::endl;

    return 0;
}



/**
  *Statische Methoden befinden sich innerhalb einer Klasse und können aufgerufen werden, ohne, dass ein Objekt instanziiert werden muss. 
  *
  **/
