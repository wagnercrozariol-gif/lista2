// Exercício 4 - Área do retângulo com mensagem se área > 100

#include <iostream>
using namespace std;

int main() {
    double base, altura, area;

    cout << "Digite a base do retângulo: "; cin >> base;
    cout << "Digite a altura do retângulo: "; cin >> altura;

    area = base * altura;
    cout << "Área do retângulo: " << area << endl;

    if (area > 100)
        cout << "Terreno grande" << endl;

    return 0;
}
