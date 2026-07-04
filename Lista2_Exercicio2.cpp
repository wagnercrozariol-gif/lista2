// Exercício 2 - Maior de dois valores (com verificação de igualdade)

#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Digite dois valores:" << endl;
    cout << "Valor A: "; cin >> a;
    cout << "Valor B: "; cin >> b;

    if (a == b)
        cout << "Os números são idênticos!" << endl;
    else if (a > b)
        cout << "O maior valor é: " << a << endl;
    else
        cout << "O maior valor é: " << b << endl;

    return 0;
}
