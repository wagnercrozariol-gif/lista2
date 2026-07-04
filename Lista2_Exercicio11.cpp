// Exercício 11 - Calcular a nota necessária em P2 para aprovação
// Fórmula: MEDIA = (P1 + 2*P2) / 3 >= 5
// Isolando P2: P2 >= (15 - P1) / 2

#include <iostream>
using namespace std;

int main() {
    double p1, p2_necessario;

    cout << "Digite a nota P1: "; cin >> p1;

    p2_necessario = (15.0 - p1) / 2.0;

    if (p2_necessario <= 0)
        cout << "Você já está aprovado com qualquer nota em P2!" << endl;
    else if (p2_necessario > 10)
        cout << "Não é possível ser aprovado. Nota necessária em P2 seria " << p2_necessario << " (acima de 10)." << endl;
    else
        cout << "Você precisa tirar pelo menos " << p2_necessario << " em P2 para ser aprovado." << endl;

    return 0;
}
