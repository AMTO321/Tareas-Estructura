#include "Lista.h"
#include <iostream>

using namespace std;

int main() {
    ListaDoble miLista;

    cout << "Datos\n";
    miLista.insertar("Carlos");
    miLista.insertar("Ana");
    miLista.insertar("Mateo");
    miLista.insertar("Sofia");

    cout << "\nLista original \n";
    miLista.imprimirAdelante();
    miLista.imprimirAtras();

    cout << "\n prueba de intertir \n";
    miLista.invertir();

    cout << "\ndespues de invertir \n";
    miLista.imprimirAdelante();
    miLista.imprimirAtras();

    return 0;
}