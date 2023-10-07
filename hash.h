#pragma once

class Hash {
private:
    int* thash;   // Arreglo de la tabla hash
    int N;        // Tama�o de la tabla hash
    int numPrimo; // N�mero primo para la tabla hash

public:
    Hash(int n);
    int obtenPrimo(int t);
    int fhash(int clave);
    int rehash(int clave, int colision, int t);
    void insertar(int clave);
    bool buscar(int clave);
    void mostrarTabla();
};



