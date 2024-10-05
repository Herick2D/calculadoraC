#include <iostream>
using namespace std;

int main() {
    char operacao;
    double num1, num2;
    bool continuar = true;

    while (continuar) {
        cout << "Escolha a operacao (+, -, *, /) ou 'q' para sair: ";
        cin >> operacao;

        if (operacao == 'q') {
            continuar = false;
            cout << "Encerrando o programa." << endl;
            break;
        }

        cout << "Digite o primeiro numero: ";
        cin >> num1;
        cout << "Digite o segundo numero: ";
        cin >> num2;

        switch (operacao) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                else
                    cout << "Erro: Divisao por zero nao permitida." << endl;
                break;
            default:
                cout << "Operacao invalida." << endl;
                break;
        }

        cout << endl;
    }

    return 0;
}
