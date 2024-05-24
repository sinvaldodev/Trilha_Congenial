#include <iostream>

using namespace std;

int main () {
  //código aqui

  int tamanho;

  cout << "Digite quantas notas você quer armazenar" << endl;
  cin >> tamanho;

  float notas[tamanho];

  // lendo as notas dinamicamente
  for (int i = 0; i < tamanho; i++) {
    cout << "Coloque a nota " << i + 1 << ":" << endl;
    cin >> notas[i];
  }

  // mostrando e printando as notas
  for (int cont = 0; cont < tamanho; cont++) {
    cout << "Essas são as notas: " << notas[cont] << endl;
  }


  return 0;
}