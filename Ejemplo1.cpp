#include <iostream>

using namespace std;

int main () {
    int CLA;
    int CAT;
    int ANT;
    int SAL;
    int RES;
    
    cout << "\nIngrese la clave del trabajador : ";
    cin >> CLA;

    cout << "\nIngrese la categoria del empleado : ";
    cin >> CAT;

    cout << "\nIngrese la antiguedad del trabajador : ";
    cin >> ANT;

    cout << "\nIngrese el salario del trabajador : ";
    cin >> SAL;

    if (CAT == 3 || CAT == 4){
        if (ANT > 5){
            RES = 1;
        }
    }

    if (CAT == 2){
        if (ANT > 7){
            RES = 1;
        }
    }

    if (RES == 1){
        cout << "\nFelicidades, reune las condiciones para el trabajo";
    }
    else{
        cout << "\nLamentablemente, no reune las condicines\n\n";
    }

    return 0;
}
