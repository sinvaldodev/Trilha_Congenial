#include <iostream>
using namespace std;

int main() {
  // Escreva seu código aqui

  int nMatriculas;

  cin >> nMatriculas;

  int matriculas[nMatriculas];

  for (int i = 0; i < nMatriculas; i++) {
    cin >> matriculas[i];
  }

  cout << nMatriculas << endl;

  for (int cont = nMatriculas - 1; cont >= 0; cont--) {
    cout << matriculas[cont] << " ";
  }
  return 0;
}