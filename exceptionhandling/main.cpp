#include <iostream>
#include <stdexcept>

// Definition der Ausnahmen
class LosfahrenException : public std::runtime_error {
public:
    LosfahrenException(const std::string& message) : std::runtime_error(message) {}
};

class StreckenendeException : public std::runtime_error {
public:
    StreckenendeException(const std::string& message) : std::runtime_error(message) {}
};

// Fahrzeug-Klasse
class Fahrzeug {
public:
    void startFahrzeug() {
        if (!sicherheitsbedingungErfuellt()) {
            throw LosfahrenException("Sicherheitsbedingung nicht erfüllt");
        }
        std::cout << "Fahrzeug startet." << std::endl;
    }

    void fahre() {
        if (streckenEndeErreicht()) {
            throw StreckenendeException("Ende der Strecke erreicht");
        }
        std::cout << "Fahrzeug fährt weiter." << std::endl;
    }

private:
    bool sicherheitsbedingungErfuellt() {
        // Hier würde die tatsächliche Logik zur Überprüfung der Sicherheitsbedingungen stehen.
        return false; // Für dieses Beispiel setzen wir es auf false.
    }

    bool streckenEndeErreicht() {
        // Hier würde die tatsächliche Logik zur Überprüfung des Streckenendes stehen.
        return true; // Für dieses Beispiel setzen wir es auf true.
    }
};

// Hauptprogramm
int main() {
    Fahrzeug fahrzeug;
    try {
        fahrzeug.startFahrzeug();
        fahrzeug.fahre();
    } catch (const LosfahrenException& e) {
        std::cerr << "Fehler beim Losfahren: " << e.what() << std::endl;
        // Fehlerbehandlung für Losfahren
    } catch (const StreckenendeException& e) {
        std::cerr << "Streckenende erreicht: " << e.what() << std::endl;
        // Fehlerbehandlung für Streckenende
    }

    return 0;
}
