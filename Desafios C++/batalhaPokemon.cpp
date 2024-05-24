#include <iostream>
using namespace std;

int main() {
  // Escreva seu código aqui

  int E, P;
  cin >> E;
  cin >> P;

  int cont = 0;

  if (E > 0) {
    while (E > 0) {
      E = E - P;
      P = P - 1;
      cont++;

      if (P <= 0 && E > 0) {
        cout << "F" << endl;
        break;
      };
    };
    
  }

  if (E <= 0) {
    cout << cont << endl;
  }

  return 0;
}