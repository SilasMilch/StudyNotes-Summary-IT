#include <iostream>
#include <stdexcept>

class AutoschlüsselvorhandenException : public std::runtime_error
{
public:
	AutoschlüsselvorhandenException(const std::string& message) : std::runtime_error(message) {}
};

class Fahrzeug
{
public:
	void startFahrzeug()
	{
		if(!schlüsselvorhanden())
		{
			throw AutoschlüsselvorhandenException("autoschlüssel nicht vorhanden");
		}
		std::cout<<"Auto startet..."<<std::endl;
	}
private:
	bool schlüsselvorhanden()
	{
		return true;
	}
};

int main()
{
	Fahrzeug fahrzeug;
	try
	{
		fahrzeug.startFahrzeug();
	}catch (const AutoschlüsselvorhandenException& e)
	{
		std::cerr << "Fehler beim Losfahren: " << e.what() << std::endl;
	}

}
