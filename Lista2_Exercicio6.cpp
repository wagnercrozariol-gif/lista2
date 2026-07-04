// Exercício 6 - Peso ideal (sem sexo) usando relação peso/altura²

#include <iostream>
using namespace std;

int main() {
    double peso, altura, imc;

    cout << "Digite o peso (kg): "; cin >> peso;
    cout << "Digite a altura (m): "; cin >> altura;

    imc = peso / (altura * altura);
    cout << "Relação peso/altura²: " << imc << endl;

    if (imc < 20)
        cout << "Situação: Abaixo do peso" << endl;
    else if (imc < 25)
        cout << "Situação: Peso ideal" << endl;
    else
        cout << "Situação: Acima do peso" << endl;

    return 0;
}
