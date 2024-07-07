Erklärung:

    Definition der Aufzählungsklasse:

    cpp

enum class Color {
    Red,
    Green,
    Blue
};

    enum class definiert eine neue Aufzählungsklasse namens Color mit den Werten Red, Green und Blue.
    Anders als bei traditionellen enum sind die Werte innerhalb des Namensraums der Klasse Color definiert, d.h. sie müssen mit Color:: referenziert werden (z.B. Color::Red).

Funktion getColorName:

cpp

std::string getColorName(Color color) {
    switch (color) {
        case Color::Red:   return "Red";
        case Color::Green: return "Green";
        case Color::Blue:  return "Blue";
        default:           return "Unknown";
    }
}

    Diese Funktion nimmt einen Color-Wert als Argument und gibt den entsprechenden Namen als Zeichenkette zurück.

Verwendung der Aufzählungsklasse im main():

cpp

    int main() {
        Color color = Color::Red;

        std::cout << "Color: " << getColorName(color) << std::endl;

        if (color == Color::Red) {
            std::cout << "The color is Red." << std::endl;
        } else {
            std::cout << "The color is not Red." << std::endl;
        }

        return 0;
    }

        Ein Color-Objekt color wird auf Color::Red gesetzt.
        Der Name der Farbe wird mithilfe der getColorName-Funktion ausgegeben.
        Ein sicherer Typvergleich wird durchgeführt, um zu überprüfen, ob die Farbe Red ist.

Vorteile von enum class gegenüber herkömmlichen enum:

    Stärkere Typensicherheit: enum class verhindert unbeabsichtigte Konvertierungen und Vergleiche mit anderen Typen.
    Namensraum: Werte einer enum class sind in einem eigenen Namensraum, wodurch Namenskonflikte vermieden werden.
    Klare Sichtbarkeit: Werte müssen mit dem Klassennamen qualifiziert werden, was die Lesbarkeit und Wartbarkeit des Codes verbessert.

Dieses Beispiel zeigt die Definition und Verwendung einer Aufzählungsklasse in C++, die die Vorteile von enum class gegenüber herkömmlichen enum nutzt.
