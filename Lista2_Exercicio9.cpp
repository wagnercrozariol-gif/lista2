// Exercício 9 - Peso ideal com sexo (tabelas diferentes para M e F)

#include <iostream>
using namespace std;

int main() {
    double peso, altura, imc;
    char sexo;

    cout << "Digite o peso (kg): "; cin >> peso;
    cout << "Digite a altura (m): "; cin >> altura;
    cout << "Digite o sexo (M/F): "; cin >> sexo;

    imc = peso / (altura * altura);
    cout << "Relação peso/altura²: " << imc << endl;

    if (sexo == 'F' || sexo == 'f') {
        if (imc < 19)
            cout << "Situação: Abaixo do peso" << endl;
        else if (imc < 24)
            cout << "Situação: Peso ideal" << endl;
        else
            cout << "Situação: Acima do peso" << endl;
    } else {
        if (imc < 20)
            cout << "Situação: Abaixo do peso" << endl;
        else if (imc < 25)
            cout << "Situação: Peso ideal" << endl;
        else
            cout << "Situação: Acima do peso" << endl;
    }

    return 0;
}
