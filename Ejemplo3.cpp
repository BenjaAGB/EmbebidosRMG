#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    int i;
    int arreglo_de_numeros[256];
    
    for (i=0 ; i<255 ; i++) {
        arreglo_de_numeros[i] = rand() % 256;
        cout << arreglo_de_numeros[i] << "\n";
    }
    return 0;
}