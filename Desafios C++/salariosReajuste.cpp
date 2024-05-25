#include <iostream>
#include <iomanip>
using namespace std;


int main() {
  // Escreva seu código aqui
  float salario;
  cin >> salario;
  cout << fixed;

  if (salario > 0 && salario <= 400) {
    float reajuste = 0.15;
    float salarioNovo = salario + (salario*0.15);
    float reajusteDeGanho = salario*0.15;
    cout << "Novo salario: " << setprecision(2) << salarioNovo << endl;
    cout << "Reajuste ganho: " << setprecision(2) << reajusteDeGanho << endl;
    cout << "Em percentual: " << resetiosflags(ios::showbase) << setprecision(0) << reajuste*100 << " %" << endl;
  }
  
  cout << fixed;
  if (salario > 400 && salario <= 800) {
    float reajuste = 0.12;
    float salarioNovo = salario + (salario*0.12);
    float reajusteDeGanho = salario*0.12;
    cout << "Novo salario: " << setprecision(2) << salarioNovo << endl;
    cout << "Reajuste ganho: " << setprecision(2) << reajusteDeGanho << endl;
    cout << "Em percentual: " << resetiosflags(ios::showbase) << setprecision(0) << reajuste*100 << " %" << endl;
  }

  cout << fixed;
  if (salario > 800 && salario <= 1200) {
    float reajuste = 0.1;
    float salarioNovo = salario + (salario*0.1);
    float reajusteDeGanho = salario*0.1;
    cout << "Novo salario: " << setprecision(2) << salarioNovo << endl;
    cout << "Reajuste ganho: " << setprecision(2) << reajusteDeGanho << endl;
    cout << "Em percentual: " << resetiosflags(ios::showbase) << setprecision(0) << reajuste*100 << " %" << endl;
  }

  cout << fixed;
  if (salario > 1200 && salario <= 2000) {
    float reajuste = 0.07;
    float salarioNovo = salario + (salario*0.07);
    float reajusteDeGanho = salario*0.07;
    cout << "Novo salario: " << setprecision(2) << salarioNovo << endl;
    cout << "Reajuste ganho: " << setprecision(2) << reajusteDeGanho << endl;
    cout << "Em percentual: " << resetiosflags(ios::showbase) << setprecision(0) << reajuste*100 << " %" << endl;
  }
  
  cout << fixed;
  if (salario > 2000) {
    float reajuste = 0.04;
    float salarioNovo = salario + (salario*0.04);
    float reajusteDeGanho = salario*0.04;
    cout << "Novo salario: " << setprecision(2) << salarioNovo << endl;
    cout << "Reajuste ganho: " << setprecision(2) << reajusteDeGanho << endl;
    cout << "Em percentual: " << resetiosflags(ios::showbase) << setprecision(0) << reajuste*100 << " %" << endl;
  }
  return 0;
}