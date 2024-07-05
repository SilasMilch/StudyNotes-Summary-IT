#include <iostream>
#include <vector>

class Shape	// Basisklasse Shape
{
public:
	virtual void draw() const	// Virtuelle Methode, die von den abgeleiteten Klassen überschrieben wird
	{
		std::cout << "Drawing a generic shape" << std::endl;
	}

	
	virtual	~Shape() {}	 // Virtueller Destruktor, um sicherzustellen, dass der Destruktor der abgeleiteten Klassen aufgerufen wird
};


class Circle : public Shape	// Abgeleitete Klasse Circle
{
public:
	// Überschreiben der draw-Methode für Circle
	void draw() const override
	{
		std::cout << "Drawing a circle" << std::endl;
	}
};

class Rectangle : public Shape	// Abgeleitete Klasse Rectangle
{
public:
	// Überschreiben der draw-Methode für Rectangle
	void draw() const override
	{
		std::cout << "Drawing a rectangle" << std::endl;
	}
};

// Abgeleitete Klasse Triangle
class Triangle : public Shape
{
public:
	
	void draw() const override	// Überschreiben der draw-Methode für Triangle
	{
		std::cout << "Drawing a triangle" << std::endl;
	}
};

int main()
{
	std::vector<Shape*> shapes;	// Vektor von Zeigern auf die Basisklasse Shape

	shapes.push_back(new Circle());	// Hinzufügen verschiedener Formen zum Vektor
	shapes.push_back(new Rectangle());
	shapes.push_back(new Triangle());

	for (const auto& shape : shapes)	// Iterieren über den Vektor und die draw-Methode aufrufen
	{
		shape->draw();	// Polymorpher Aufruf
	}

	for(auto& shape : shapes)	// Speicher freigeben
	{
		delete shape;
	}
	return 0;
}
