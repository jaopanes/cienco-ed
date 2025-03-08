#include <iostream>
#include <string>

using namespace std;

int main()
{
  double altura = 0, peso = 0, imc = 0;
  
  cout << "Qual sua altura? " << endl;
  cin >> altura;
  
  cout << "Qual seu peso? " << endl;
  cin >> peso;
  
  imc = peso/(altura*altura);
  
  if(imc <20) {
    cout << "Abaixo do peso";
  }
    
  if(imc > 20 && imc<25){
    cout << "Peso ideal";
  }
        
  if(imc >= 25) {
    cout << "Acima do peso";
  }

  return 0
;}