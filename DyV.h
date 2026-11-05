#include <bits/stdc++.h>
using namespace std;

template<typename T>
int busquedaBinaria(const T& X, const vector<T>& V, int ini, int fin){
    if(ini > fin) {
        printf("No se encuentra en el array\n");
        return -1;
    }
    int medio = ini + (fin - ini) / 2;
    if(V[medio] == X) return medio;
    else if(V[medio] > X) return busquedaBinaria(X, V, ini, medio - 1);
    else return busquedaBinaria(X, V, medio + 1, fin);
}

template<typename T>
int particion(vector<T>& v, int ini, int fin){
    T x = v[fin];
    int i = ini;
    for(int j = ini; j < fin; j++){
        if(v[j] <= x){
            swap(v[i], v[j]);
            i++;
        }
    }
    swap(v[i], v[fin]);
    return i;
}

template<typename T>
void quicksort(vector<T>& v, int ini, int fin){
    if(ini < fin) {
        int pivot = particion(v, ini, fin);
        quicksort(v, ini, pivot - 1);
        quicksort(v, pivot + 1, fin);
    }
}
