#include <iostream>
#include <iomanip>
using namespace std;

float area(float B, float b, float h) {
  float areaTrapezio = ((B + b)*h)/2;
  return areaTrapezio;
}


int main() {
  float baseMaior;
  cin >> baseMaior;
  float baseMenor;
  cin >> baseMenor;
  float altura;
  cin >> altura;
  

  cout << fixed;
  cout << "A=" << setprecision(1) << area(baseMaior, baseMenor, altura) << endl;

  return 0;
}