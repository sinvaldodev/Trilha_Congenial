#include <iostream>

using namespace std;

int main() {
  int n;
  int numeros[n];
  int cont = 0;
  cin >> n;

  do {
    cin >> numeros[cont];
    cont++;
  } while(numeros[cont] > numeros[cont - 1]);

  cout << cont << endl;

}