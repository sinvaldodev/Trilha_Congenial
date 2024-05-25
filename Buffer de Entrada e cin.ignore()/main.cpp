#include <iostream>

using namespace std;

int main() {
  int idade;

  string nome;
  string sobrenome;

  cin >> idade;

  cin.ignore();

  getline(cin, nome);
  getline(cin, sobrenome);

  cout << idade << " " << nome << " " << sobrenome << endl;
}