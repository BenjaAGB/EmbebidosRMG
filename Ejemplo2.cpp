#include<iostream>

using namespace std;

int main() {
    int FA;
    int S;

    cout << "/n Ingrese el numero de sonidos emitidos por minuto : ";
    cin >> S;

    FA = S*(1/4) + 40;

    cout << "/n La temperatura en Fahrenheit es : " << FA << "[F]" << endl;

    return 0;
}