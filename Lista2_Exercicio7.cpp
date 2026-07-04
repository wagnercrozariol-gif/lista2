// Exercício 7 - Verificar e classificar triângulo

#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Digite os três lados:" << endl;
    cout << "Lado A: "; cin >> a;
    cout << "Lado B: "; cin >> b;
    cout << "Lado C: "; cin >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "Os valores formam um triângulo." << endl;

        if (a == b && b == c)
            cout << "Classificação: Equilátero" << endl;
        else if (a == b || a == c || b == c)
            cout << "Classificação: Isósceles" << endl;
        else
            cout << "Classificação: Escaleno" << endl;
    } else {
        cout << "Os valores NÃO formam um triângulo." << endl;
    }

    return 0;
}
