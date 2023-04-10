#include<iostream>
#include<cmath> // para poder utilizar potencioas y raiz cuadrada.
 
using namespace std;

float promedio(int array[], int arraySize); // definimos la funcion promedio
float varianza(int array[], int arraySize,float promedio); // definimos la funcion varianza
float desviacion(float varianza); // definimos la funcion desviacion.
int  moda(int array[], int arraySize); // definimos la funcion desviacion. 

int main () { // main code 

    int notas[] = {1}; // array de notas a eleccion 
    int arraySize = end(notas) - begin(notas); // calculo de cantidad de elementos o notas en el array
    if (arraySize < 1 || arraySize > 100){    // if para que solo se pueda ejecutar para cantidades de notas menores a 100 y mayores a 1
        cout << "las notas no corresponden a lo definido ";
        return 0;
    }
    
    cout << "\n La cantidad de notas es : " << arraySize << "\n";
    cout << " Las notas son : \n ";
    for (int i = 0 ; i < arraySize ; i++){

        cout << " ["<< notas[i] << "] ";
    }
    
    float prom = promedio(notas, arraySize);
    cout << "\n El promedio es : " << prom << "\n";
    float var = varianza(notas, arraySize, prom);
    cout << " La varianza es : " << var << "\n";
    float desv = desviacion(var);
    cout << " La desviacion estandar es : "<< desv << "\n";
    float mod = moda(notas, arraySize);
    cout << " La moda es : " << mod << "\n";
    
    return 0;
}

float promedio(int array[], int arraySize) { // Funcion promedio
    float promedio = 0.0, promedio1 = 0.0;
    for (int i = 0; i < arraySize; i++){
        promedio1 = array[i]* (1.0/arraySize);
        promedio = promedio +promedio1; 
    }
    return promedio; 
}
float varianza(int array[], int arraySize, float promedio){ // Funcion varianza

    float varianza = 0.0, varianza1 = 0.0;
    for (int i = 0 ; i < arraySize ; i++){
        varianza1 = pow((array[i]- promedio),2.0)* 1.0/arraySize;
        varianza = varianza + varianza1;
    }
    return varianza;
}
float desviacion(float varianza){ // Funcion desviacion estandar
    float desviacion;
    desviacion = sqrt(varianza);
    return desviacion;
}
int moda(int array[], int arraySize){ // Funcion moda
    int moda1,moda;
    int count = 0, count1;
    for (int i = 0; i < arraySize; i++){
        count1 = 0;
        moda1 = array[i];
        for (int j = 0; j < arraySize; j++){
            if (moda1 == array[j]){
                count1++;
            }
        }
        if (count1 > count){
            moda = moda1;
        }

    }
    return moda;
}