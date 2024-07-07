#include <iostream>

// Definition einer Aufzählungsklasse
enum class Color {
    Red,
    Green,
    Blue
};

// Eine Funktion zur Rückgabe des Farbnamen als Zeichenkette
std::string getColorName(Color color) {
    switch (color) {
        case Color::Red:   return "Red";
        case Color::Green: return "Green";
        case Color::Blue:  return "Blue";
        default:           return "Unknown";
    }
}

int main() {
    Color color = Color::Red;

    std::cout << "Color: " << getColorName(color) << std::endl;

    // Beispiel für sicheren Typvergleich
    if (color == Color::Red) {
        std::cout << "The color is Red." << std::endl;
    } else {
        std::cout << "The color is not Red." << std::endl;
    }

    return 0;
}

