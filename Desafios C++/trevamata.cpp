#include <iostream>
using namespace std;

int main() {
  // Escreva seu código aqui

  int n;
  // cout << "Número de viajantes: " << endl;
  cin >> n;

  int c;
  // cout << "Peso total suportado: " << endl;
  cin >> c;

  int k[n];
  string nome[n];
  int peso = 0;


  for (int i = 0; i < n; i++) {
    // cout << "Nome: " << endl;
    cin >> nome[i];
    // cout << "Peso: " << endl;
    cin >> k[i];
    peso = peso + k[i];
  }

  if (peso <= c) {
    cout << "Vamos todos encontrar a montanha!" << endl;
  } else {
    cout << "Vamos virar almoço de aranhas gigantes!" << endl;
  }

  return 0;
}