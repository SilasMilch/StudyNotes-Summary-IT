Erklärung der späten Bindung

    Virtuelle Funktionen: Die Methode show in der Basisklasse Base ist als virtual deklariert. Dadurch wird die Methode als Kandidat für die späte Bindung markiert.
    Polymorphie: Die Zeiger basePtr1 und basePtr2 sind vom Typ Base*, zeigen aber zur Laufzeit auf Objekte verschiedener Klassen (Base und Derived).
    Laufzeitentscheidung: Bei Aufruf von obj->show() innerhalb der Funktion display wird zur Laufzeit entschieden, welche Implementierung von show tatsächlich aufgerufen wird. Das hängt davon ab, auf welches konkrete Objekt der Zeiger obj zeigt.
        Zeigt der Zeiger auf ein Base-Objekt (basePtr1), wird Base::show aufgerufen.
        Zeigt der Zeiger auf ein Derived-Objekt (basePtr2), wird Derived::show aufgerufen.

Diese Laufzeitentscheidung ist das Kernmerkmal der späten Bindung und ermöglicht Polymorphie, indem es erlaubt, dass Objekte unterschiedlichen Typs durch eine gemeinsame Schnittstelle (hier Base*) behandelt werden, und die korrekten Methoden zur Laufzeit aufgerufen werden.
