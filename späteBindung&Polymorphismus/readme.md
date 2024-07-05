Polymorphismus => Objekte verschiedener Typen können durch gemeinsame Schnittstelle angesprochen werden

Späte Bindung => bezieht sich auf die Methode, wie Funktionsaufrufe zur Laufzeit aufgelöst werden anstatt zur Compile Zeit



Sowohl späte Bindung als auch Polymorphismus werden durch die Verwendung von virtuellen Methoden ermöglicht. 
Späte Bindung: Zwei Unterklassen werden erstellt und die public Methode der Oberklasse wird überschrieben. 
=> die Public Klasse die überschrieben werden soll muss gekennzeichnet werden mit (virtual) 

Funktion die in der Oberklasse vorhanden ist und überschrieben werden soll => virtual void draw() const	

Funktion die die virtual FUnktion überschreiben soll => void draw() const override
