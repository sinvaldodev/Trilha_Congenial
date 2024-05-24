#include <iostream>
#include <string>

using namespace std;

int main() {
  //código

  //structs padrão
  struct {
    string nome;
    int idade;
    float altura;
    float salario;
  } pessoa1, pessoa2, pessoa3;

  pessoa1.nome = "Sinvaldo";
  pessoa1.idade = 25;
  cout << pessoa1.nome << " " << pessoa1.idade << endl;


  //Structed nomeadas
  struct Aluno {
    string nome;
    int idade;
    float notas;
  };

  Aluno lista[5];
  lista[0].nome = "Sinvaldo";


  return 0;
}