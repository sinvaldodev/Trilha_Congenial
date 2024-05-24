#include <iostream>
#include <iomanip>
using namespace std;

int soma(int A, int B){
  int resultadoSoma = A + B;
  return resultadoSoma;
}

int subtracao(int A, int B){
  int resultadoSoma = A - B;
  return resultadoSoma;
}

float divisao(float A, float B){
  float resultadoSoma = A / B;
  return resultadoSoma;
}

int multiplicacao(int A, int B){
  int resultadoSoma = A * B;
  return resultadoSoma;
}


int main() {
  char c;
  cin >> c;
  int valor1;
  int valor2;

  cin >> valor1;
  cin >> valor2;

  switch (c) {
    case '+':
    cout << soma(valor1, valor2) << endl;
    break;
    case '-':
    cout << subtracao(valor1, valor2) << endl;
    break;
    case '/':
    cout << fixed;
    cout << setprecision(1) << divisao(valor1, valor2) << endl;
    break;
    case '*':
    cout << multiplicacao(valor1, valor2) << endl;
    break;
    defaut:
    break;
  }

  return 0;
}