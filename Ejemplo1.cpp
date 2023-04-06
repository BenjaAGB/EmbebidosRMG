#include <iostream>

using namespace std;

int main () {
    int CLA;
    int CAT;
    int ANT;
    int SAL;
    int RES;
    
    cout << "Ingrese la clave del trabajador :";
    cin >> CLA;

    cout << "Ingrese la categoria del empleado :";
    cin >> CAT;

    cout << "Ingrese la antiguedad del trabajador";
    cin >> ANT;

    cout << "Ingrese el salario del trabajador";
    cin >> SAL;

    if (CAT == 3 || CAT == 4){
        if (ANT < 5){
            RES = 1;
        }
    }

    if (CAT == 2){
        if (ANT < 7){
            RES = 1;
        }
    }

    if (RES == 1){
        cout << "Reune las condiciones";
    }
    else{
        cout << "No reune las condicines";
    }

    return 0;
}
