#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  // escreva o código aqui

  //FUNÇÕES IMPORTANTES DO IOMANIP

  /*
  setprecision() Definir precisão decimal

  setbase() converter a base para dec, hex ou oct

  setfill() definir caractere de preenchimento

  setw() definir largura do campo
  */

  double f = 3.14159;
  double g = 3.14169;

  cout << "------------- SET PRECISION (SEM RESET IOS FLAGS) -------------" << endl;
  cout << setprecision(5) << f << endl;
  cout << setprecision(9) << f << endl;
  cout << fixed;
  cout << setprecision(5) << f << endl;
  cout << setprecision(9) << f << endl;
  cout << "------------- SET PRECISION (COM RESET IOS FLAGS) -------------" << endl;
  cout << fixed;
  cout << setprecision(5) << g << endl;
  cout << setprecision(9) << g << endl;
  cout << resetiosflags(ios_base::fixed) << setprecision(9) << g << endl;
  cout << "--------------------------" << endl;

  cout << "------------- SET BASE -------------" << endl;
  int numero = 42;
  
  cout << "Decimal" << setbase(10) << setw(10) << numero << endl;
  cout << "Octal" << setbase(8) << setw(8) << numero << endl;
  cout << setw(60) << setfill('-') << "-" << endl;



  return 0;
}