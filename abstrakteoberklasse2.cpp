abstract class Fahrzeug {
    // Abstrakte Methode (ohne Implementierung)
    public abstract void fahren();

    // Konkrete Methode (mit Implementierung)
    public void tanken() {
        System.out.println("Das Fahrzeug wird getankt.");
    }
}

class Auto extends Fahrzeug {
    // Implementierung der abstrakten Methode
    @Override
    public void fahren() {
        System.out.println("Das Auto fährt.");
    }
}

class Fahrrad extends Fahrzeug {
    // Implementierung der abstrakten Methode
    @Override
    public void fahren() {
        System.out.println("Das Fahrrad fährt.");
    }
}

public class Main {
    public static void main(String[] args) {
        Fahrzeug meinAuto = new Auto();
        meinAuto.fahren();  // Ausgabe: Das Auto fährt.
        meinAuto.tanken();  // Ausgabe: Das Fahrzeug wird getankt.

        Fahrzeug meinFahrrad = new Fahrrad();
        meinFahrrad.fahren();  // Ausgabe: Das Fahrrad fährt.
    }
}
