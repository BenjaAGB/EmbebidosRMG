#include <iostream>

using namespace std;

float TEMP(float arreglo[]);

int main () {
    int i;
    float promedio;
    float arreglo_temp[24];
    for (i = 0 ; i<24 ; i++) {
    cout << "\nDigite la temperatura en celcius para las "<< i + 1 << " [hrs]. : ";
    cin >> arreglo_temp[i];
    }
    promedio = TEMP(arreglo_temp);
    cout << "\nEl promedio de temperatura es \n" << promedio;
    return 0;
}


float TEMP (float arreglo[]) {
    int i;
    float prom = 0;

    for (i=0 ; i<24 ; i++) {
        prom = arreglo[i] + prom;
    }
    prom = prom/24.0;
    return prom;
}