#include<iostream>
#include<cmath>

using namespace std;

int promedio(int Arreglo[],int tamanoArreglo);
int varianza(int Arreglo[], int tamanoArreglo, int Promedio);
int desviacion_estandar(int varianza);

int main() {
    const int tamanoArreglo = 3;
    int NOTAS[tamanoArreglo] = {2,4,6};
    
    int prom = promedio(NOTAS,tamanoArreglo);
    cout << prom << "\n";

    int var = varianza(NOTAS, tamanoArreglo, prom);
    cout << var << "\n";

    int des = desviacion_estandar(var);
    cout << des << "\n";

    return 0;
}

int promedio(int Arreglo[], int tamanoArreglo) {
    int sum = 0, i, mean = 0;
    for (i = 0;i<tamanoArreglo;i++) {
        sum = sum + Arreglo[i];
    }
    mean = sum/tamanoArreglo;
    return mean;
}

int varianza(int Arreglo[], int tamanoArreglo, int Promedio) {
    int variance,variance1, i;
    for (i=0; i<tamanoArreglo; i++) {

        variance = (Arreglo[i] - Promedio)^2/tamanoArreglo;
        variance1 = variance + variance1;

    }
        return variance1;
} 

int desviacion_estandar(int varianza) {
    int desviacion;
    desviacion = sqrt(varianza);
    return desviacion;
}

