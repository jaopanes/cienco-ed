#include <iostream>
#include <string>

using namespace std;

int main()
{
  double valorSalarioMinimo = 0, valorHoraTrabalhada = 0, salarioBruto = 0, salarioLiquido = 0, valorImposto = 0;
  int quantidadeHorasTrabalhadas = 0;
  
  cout << "Qual o valor do salário mínino? " << endl;
  cin >> valorSalarioMinimo;

  cout << "Qual a quantidade de horas trabalhadas? " << endl;
  cin >> quantidadeHorasTrabalhadas;
  
  valorHoraTrabalhada = valorSalarioMinimo / 2;
  salarioBruto = valorHoraTrabalhada * quantidadeHorasTrabalhadas;
  valorImposto = salarioBruto * 0.03;
  salarioLiquido = salarioBruto - valorImposto;
  
  cout << "O salário bruto é: " << salarioBruto << endl;
  cout << "O valor do imposto é: " << valorImposto << endl;
  cout << "O salário líquido é: " << salarioLiquido << endl;

  return 0
;}