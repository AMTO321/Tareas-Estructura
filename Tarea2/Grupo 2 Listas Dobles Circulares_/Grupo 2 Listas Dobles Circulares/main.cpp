#include <iostream>
#include <string>
#include "ListaDobleCircular.h"

using namespace std;

int main() {
    ListaDobleCircular<int> lista;

    lista.insertarAlFinal(20);
    lista.insertarAlFinal(30);
    lista.insertarAlFinal(40);
    lista.insertarAlInicio(10); 

    cout << "posciosion inicial" << endl;
    lista.imprimir();
    cout << "Tamanio: " << lista.getTamanio() << endl;


    cout << "\nobtener poscicion" << endl;
    int posBuscada;
    cout << "Ingrese la posicion que desea consultar (0 a " << lista.getTamanio() - 1 << "): ";
    cin >> posBuscada;

    if (posBuscada >= 0 && posBuscada < lista.getTamanio()) {
        cout << "El elemento en la posicion " << posBuscada << " es: " << lista.obtenerEnPosicion(posBuscada) << endl;
    } else {
        cout << "Posicion fuera de rango." << endl;
    }

    
    cout << "\nbuscar valor" << endl;
    int valorBuscado;
    cout << "Ingrese el numero entero que desea buscar en la lista: ";
    cin >> valorBuscado;

    Nodo<int>* encontrado = lista.buscar(valorBuscado);
    if (encontrado != nullptr)
        cout << "El elemento " << encontrado->getDato() << " si se encuentra en la lista." << endl;
    else
        cout << "El elemento " << valorBuscado << " no fue encontrado en la lista." << endl;

    
    cout << "\nstring " << endl;
    ListaDobleCircular<string> nombres;
    nombres.insertarAlInicio("Melanie"); 
    nombres.insertarAlFinal("Adrian");
    nombres.insertarAlFinal("Luis");
    nombres.insertarAlFinal("Ana");
   
    cout << "Lista de nombres: ";
    nombres.imprimir();

    int posNombre;
    cout << "ingrese la posicion del nombre a consultar (0 a " << nombres.getTamanio() - 1 << "): ";
    cin >> posNombre;

    if (posNombre >= 0 && posNombre < nombres.getTamanio()) {
        cout << "Nombre en la posicion " << posNombre << ": " << nombres.obtenerEnPosicion(posNombre) << endl;
    } else {
        cout << "Posicion fuera de rango." << endl;
    }

    return 0;
}