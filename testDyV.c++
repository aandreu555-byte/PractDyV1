#include <iostream>
#include <vector>
#include "DyV.h"

using namespace std;

int main()
{
    vector<int> enteros = {8, 3, 1, 7, 0, 10, 2};
    cout << "Original: ";
    for (int x : enteros)
        cout << x << ' ';
    if (!enteros.empty())
        quicksort(enteros, 0, static_cast<int>(enteros.size()) - 1);
        cout << "\nOrdenado: ";
    for (int x : enteros)
        cout << x << ' ';
    int indiceInt = busquedaBinaria(7, enteros, 0, static_cast<int>(enteros.size()) - 1);
    cout << "\nBusqueda de 7: " << indiceInt << "\n\n";


    vector<float> reales = {3.5f, 1.2f, 8.7f, 2.4f, 5.1f};
    cout << "Original: ";
    for (float x : reales)
        cout << x << ' ';
    if (!reales.empty())
        quicksort(reales, 0, static_cast<int>(reales.size()) - 1);
    cout << "\nOrdenado: ";
    for (float x : reales)
        cout << x << ' ';
    int indiceFloat = busquedaBinaria(2.4f, reales, 0, static_cast<int>(reales.size()) - 1);
    cout << "\nBusqueda de 2.4: " << indiceFloat << "\n\n";
	
    vector<char> caracteres = {'d', 'a', 'z', 'c', 'b'};
    cout << "Original: ";
    for (char x : caracteres)
        cout << x << ' ';
    if (!caracteres.empty())
        quicksort(caracteres, 0,
                  static_cast<int>(caracteres.size()) - 1);
    cout << "\nOrdenado: ";
    for (char x : caracteres)
        cout << x << ' ';
    int indiceChar = busquedaBinaria('j', caracteres, 0, static_cast<int>(caracteres.size()) - 1);
    cout << "\nBusqueda de 'c': " << indiceChar << '\n';

    return 0;
}
