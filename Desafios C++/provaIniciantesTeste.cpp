#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    int* numeros = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    int* lis = new int[n];
    for (int i = 0; i < n; i++) {
        lis[i] = 1;
    }

    // Calcular o valor LIS
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (numeros[i] > numeros[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
            }
        }
    }

    // Encontrar o maior valor em lis[]
    int tamanho = lis[0];
    for (int i = 1; i < n; i++) {
        if (lis[i] > tamanho) {
            tamanho = lis[i];
        }
    }

    cout << tamanho << endl;

    delete[] numeros;
    delete[] lis;

    return 0;
}