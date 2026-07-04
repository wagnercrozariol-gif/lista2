#include <iostream>
#include <cmath>
using namespace std;

// ─── Exercício 1 ─────────────────────────────────────────────────────────────
void ex01() {
    double a, b;
    cout << "\n[Ex 1] Digite dois valores distintos: ";
    cin >> a >> b;
    cout << "Maior: " << (a > b ? a : b) << endl;
}

// ─── Exercício 2 ─────────────────────────────────────────────────────────────
void ex02() {
    double a, b;
    cout << "\n[Ex 2] Digite dois valores: ";
    cin >> a >> b;
    if (a == b)
        cout << "Os números são idênticos." << endl;
    else
        cout << "Maior: " << (a > b ? a : b) << endl;
}

// ─── Exercício 3 ─────────────────────────────────────────────────────────────
void ex03() {
    double a, b, c;
    cout << "\n[Ex 3] Digite três valores: ";
    cin >> a >> b >> c;

    double maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    cout << "Maior(es): ";
    if (a == maior) cout << a << " ";
    if (b == maior) cout << b << " ";
    if (c == maior) cout << c << " ";
    cout << endl;
}

// ─── Exercício 4 ─────────────────────────────────────────────────────────────
void ex04() {
    double base, altura;
    cout << "\n[Ex 4] Digite base e altura do retângulo: ";
    cin >> base >> altura;
    double area = base * altura;
    cout << "Área: " << area << endl;
    if (area > 100)
        cout << "Terreno grande" << endl;
}

// ─── Exercício 5 ─────────────────────────────────────────────────────────────
void ex05() {
    double base, altura;
    cout << "\n[Ex 5] Digite base e altura do retângulo: ";
    cin >> base >> altura;
    double area = base * altura;
    cout << "Área: " << area << endl;
    if (area > 100)
        cout << "Terreno grande" << endl;
    else
        cout << "Terreno pequeno" << endl;
}

// ─── Exercício 6 ─────────────────────────────────────────────────────────────
void ex06() {
    double peso, altura;
    cout << "\n[Ex 6] Digite peso (kg) e altura (m): ";
    cin >> peso >> altura;
    double r = peso / (altura * altura);
    cout << "Relação peso/altura²: " << r << endl;
    if (r < 20)
        cout << "Abaixo do peso" << endl;
    else if (r < 25)
        cout << "Peso ideal" << endl;
    else
        cout << "Acima do peso" << endl;
}

// ─── Exercício 7 ─────────────────────────────────────────────────────────────
void ex07() {
    double a, b, c;
    cout << "\n[Ex 7] Digite três lados: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Forma um triângulo. ";
        if (a == b && b == c)
            cout << "Classificação: Equilátero" << endl;
        else if (a == b || b == c || a == c)
            cout << "Classificação: Isósceles" << endl;
        else
            cout << "Classificação: Escaleno" << endl;
    } else {
        cout << "Não forma um triângulo." << endl;
    }
}

// ─── Exercício 8 ─────────────────────────────────────────────────────────────
void ex08() {
    double a, b, c;
    cout << "\n[Ex 8] Digite três valores (A, B, C): ";
    cin >> a >> b >> c;

    // Compara com tolerância para evitar erro de ponto flutuante
    double eps = 1e-9;
    if (fabs(a*a + b*b - c*c) < eps ||
        fabs(a*a + c*c - b*b) < eps ||
        fabs(b*b + c*c - a*a) < eps)
        cout << "Forma um triângulo retângulo." << endl;
    else
        cout << "Não forma um triângulo retângulo." << endl;
}

// ─── Exercício 9 ─────────────────────────────────────────────────────────────
void ex09() {
    double peso, altura;
    char sexo;
    cout << "\n[Ex 9] Digite peso (kg), altura (m) e sexo (M/F): ";
    cin >> peso >> altura >> sexo;
    double r = peso / (altura * altura);
    cout << "Relação peso/altura²: " << r << endl;

    if (sexo == 'F' || sexo == 'f') {
        if (r < 19)       cout << "Abaixo do peso" << endl;
        else if (r < 24)  cout << "Peso ideal" << endl;
        else              cout << "Acima do peso" << endl;
    } else {
        if (r < 20)       cout << "Abaixo do peso" << endl;
        else if (r < 25)  cout << "Peso ideal" << endl;
        else              cout << "Acima do peso" << endl;
    }
}

// ─── Exercício 10 ────────────────────────────────────────────────────────────
void ex10() {
    double p1, p2;
    cout << "\n[Ex 10] Digite P1 e P2: ";
    cin >> p1 >> p2;
    double media = (p1 + 2.0 * p2) / 3.0;
    cout << "Média: " << media << endl;
    cout << (media >= 5.0 ? "Aprovado" : "Reprovado") << endl;
}

// ─── Exercício 11 ────────────────────────────────────────────────────────────
void ex11() {
    double p1;
    cout << "\n[Ex 11] Digite P1: ";
    cin >> p1;

    // (p1 + 2*p2) / 3 >= 5  =>  p2 >= (15 - p1) / 2
    double p2_min = (15.0 - p1) / 2.0;

    if (p2_min <= 0.0)
        cout << "Você já está aprovado com qualquer nota em P2." << endl;
    else if (p2_min > 10.0)
        cout << "Impossível ser aprovado. Nota necessária em P2 seria: " << p2_min << endl;
    else
        cout << "Você precisa tirar pelo menos " << p2_min << " em P2 para ser aprovado." << endl;
}

// ─── Menu principal ───────────────────────────────────────────────────────────
int main() {
    int opcao;

    do {
        cout << "\n========================================" << endl;
        cout << "   Lista 02 - Operações com Decisão     " << endl;
        cout << "========================================" << endl;
        cout << " 1. Maior de dois valores distintos"     << endl;
        cout << " 2. Maior de dois valores (c/ igualdade)"<< endl;
        cout << " 3. Maior(es) de três valores"           << endl;
        cout << " 4. Área do retângulo (aviso se > 100)"  << endl;
        cout << " 5. Área do retângulo (grande/pequeno)"  << endl;
        cout << " 6. Peso ideal (sem distinção de sexo)"  << endl;
        cout << " 7. Verificar e classificar triângulo"   << endl;
        cout << " 8. Verificar triângulo retângulo"       << endl;
        cout << " 9. Peso ideal (com distinção de sexo)"  << endl;
        cout << "10. Aprovado ou Reprovado (média pond.)" << endl;
        cout << "11. Nota mínima necessária em P2"        << endl;
        cout << " 0. Sair"                                << endl;
        cout << "----------------------------------------" << endl;
        cout << "Escolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1:  ex01(); break;
            case 2:  ex02(); break;
            case 3:  ex03(); break;
            case 4:  ex04(); break;
            case 5:  ex05(); break;
            case 6:  ex06(); break;
            case 7:  ex07(); break;
            case 8:  ex08(); break;
            case 9:  ex09(); break;
            case 10: ex10(); break;
            case 11: ex11(); break;
            case 0:  cout << "\nSaindo...\n"; break;
            default: cout << "\nOpção inválida!\n";
        }

    } while (opcao != 0);

    return 0;
}
