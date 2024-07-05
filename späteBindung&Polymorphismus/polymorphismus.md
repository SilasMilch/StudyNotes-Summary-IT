Erklärung des Programms

    Basisklasse Shape:
        Definiert eine virtuelle Methode draw(), die von abgeleiteten Klassen überschrieben wird, um ihre eigene Implementierung des Zeichnens bereitzustellen.
        Der virtuelle Destruktor stellt sicher, dass beim Löschen von Objekten der abgeleiteten Klassen über einen Zeiger auf die Basisklasse der Destruktor der abgeleiteten Klasse aufgerufen wird.

    Abgeleitete Klassen Circle, Rectangle, und Triangle:
        Jede dieser Klassen überschreibt die draw()-Methode, um spezifische Ausgaben für die jeweilige Form bereitzustellen.

    Hauptfunktion main():
        Ein Vektor von Zeigern auf Shape-Objekte wird erstellt.
        Verschiedene Formen (Kreis, Rechteck, Dreieck) werden dynamisch erstellt und zum Vektor hinzugefügt.
        Eine Schleife iteriert über den Vektor und ruft die draw()-Methode jeder Form auf. Dank Polymorphismus wird die korrekte draw()-Methode der jeweiligen abgeleiteten Klasse aufgerufen.
        Am Ende wird der Speicher freigegeben, indem die dynamisch erstellten Objekte gelöscht werden.


        => 
        Diese Ausgabe zeigt, dass die draw()-Methoden der jeweiligen abgeleiteten Klassen (Circle, Rectangle, Triangle) 
        aufgerufen wurden, obwohl der Vektor shapes Zeiger auf die Basisklasse Shape enthält. Dies ist das Herzstück des 
        Polymorphismus: die Fähigkeit, verschiedene Objekte durch eine gemeinsame Schnittstelle zu behandeln und zur Laufzeit 
        die korrekten Methoden aufzurufen.
