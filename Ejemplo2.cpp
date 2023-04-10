#include<iostream>
using namespace std;
int main() {
    int S;
    cout << "\n Ingrese el numero de sonidos emitidos por minuto : ";
    cin >> S;
    float FA = S*(0.25) + 40;

    cout << "\n La temperatura en Fahrenheit es : " << FA << "[F]";

    float CE = (FA - 32.0) * 5/9;
    cout << "\n La temperatura en Celcius es de : "<< CE<< "[C]";
    return 0;
}