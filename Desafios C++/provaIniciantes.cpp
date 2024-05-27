#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

  int n;
  cin >> n;

  if (n == 0) {
    cout << 0 << endl;
    return 0;
  }

  int numeros[n];
  for (int i = 0; i < n; i++){
    cin >> numeros[i];
  }

  int verificacao[n];
  for (int i = 0; i < n; i++) {
    verificacao[i] = 1;
  }

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (numeros[i] > numeros[j]) {
        verificacao[i] = max(verificacao[i], verificacao[j] + 1);
      }
    }
  }
  
  int longest = verificacao[0];
  for (int i = 1; i < n; i++) {
    if (verificacao[i] > longest) {
      longest = verificacao[i];
    }
  }

  cout << longest << endl;

  return 0;
}