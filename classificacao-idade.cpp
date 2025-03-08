#include <iostream>
#include <string>

using namespace std;

int main()
{
  int idade = 0;
  
  cout << "Qual a idade do nadador? " << endl;
  cin >> idade;

  if(idade < 5) {
    cout << "Infantil";
  }
  
  if(idade >= 5 && idade <= 7) {
    cout << "Infantil A";
  }

  if(idade >= 8 && idade <= 10) {
    cout << "Infantil A";
  }

  if(idade >= 11 && idade <= 13) {
    cout << "Juvenil A";
  }

  if(idade >= 14 && idade <= 17) {
    cout << "Juvenil B";
  }

  if(idade >= 18) {
    cout << "Senior";
  }

  return 0
;}