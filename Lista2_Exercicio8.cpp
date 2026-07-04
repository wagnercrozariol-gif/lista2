// Exercício 8 - Verificar se três valores formam um triângulo retângulo

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    double a, b, c;

    cout << "Digite três valores (A, B, C):" << endl;
    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b;
    cout << "C: "; cin >> c;

    // Verifica se forma triângulo
    if (!((a + b > c) && (a + c > b) && (b + c > a))) {
        cout << "Os valores NÃO formam um triângulo." << endl;
        return 0;
    }

    // Ordena para encontrar a hipotenusa (maior lado)
    double lados[3] = {a, b, c};
    sort(lados, lados + 3);
    // lados[2] é o maior (hipotenusa candidata)

    if (fabs((lados[2] * lados[2]) - (lados[0] * lados[0] + lados[1] * lados[1])) < 1e-9)
        cout << "Os valores formam um triângulo RETÂNGULO." << endl;
    else
        cout << "Os valores NÃO formam um triângulo retângulo." << endl;

    return 0;
}
