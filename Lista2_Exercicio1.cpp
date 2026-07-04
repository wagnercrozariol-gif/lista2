// Exercício 1 - Exibir o maior de dois valores distintos

#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Digite dois valores distintos:" << endl;
    cout << "Valor A: "; cin >> a;
    cout << "Valor B: "; cin >> b;

    if (a > b)
        cout << "O maior valor é: " << a << endl;
    else
        cout << "O maior valor é: " << b << endl;

    return 0;
}
