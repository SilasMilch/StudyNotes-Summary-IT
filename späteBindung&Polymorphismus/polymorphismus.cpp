#include <iostream>
#include <vector>

class Shape
{
public:
	virtual void draw() const
	{
		std::cout << "Drawing a generic shape" << std::endl;
	}

	virtual	~Shape() {}
};


class Circle : public Shape
{
public:

	void draw() const override
	{
		std::cout << "Drawing a circle" << std::endl;
	}
};

class Rectangle : public Shape
{
public:
	void draw() const override
	{
		std::cout << "Drawing a rectangle" << std::endl;
	}
};

class Triangle : public Shape
{
public:
	void draw() const override
	{
		std::cout << "Drawing a triangle" << std::endl;
	}
};

int main()
{
	std::vector<Shape*> shapes;

	shapes.push_back(new Circle());
	shapes.push_back(new Rectangle());
	shapes.push_back(new Triangle());

	for (const auto& shape : shapes)
	{
		shape->draw();
	}

	for(auto& shape : shapes)
	{
		delete shape;
	}
	return 0;
}
