// Exercício 10 - Aprovado ou Reprovado com fórmula MEDIA = (P1 + 2*P2) / 3

#include <iostream>
using namespace std;

int main() {
    double p1, p2, media;

    cout << "Digite a nota P1: "; cin >> p1;
    cout << "Digite a nota P2: "; cin >> p2;

    media = (p1 + 2 * p2) / 3.0;
    cout << "Média: " << media << endl;

    if (media >= 5.0)
        cout << "Situação: Aprovado" << endl;
    else
        cout << "Situação: Reprovado" << endl;

    return 0;
}
