// Exercício 3 - Exibir o(s) maior(es) de três valores

#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Digite três valores:" << endl;
    cout << "Valor A: "; cin >> a;
    cout << "Valor B: "; cin >> b;
    cout << "Valor C: "; cin >> c;

    double maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    cout << "O(s) maior(es) valor(es): ";
    if (a == maior) cout << a << " ";
    if (b == maior) cout << b << " ";
    if (c == maior) cout << c << " ";
    cout << endl;

    return 0;
}
