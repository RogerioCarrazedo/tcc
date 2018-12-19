#include <iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;


//start aplication
int main() {

    int num1, num2, soma, sub, mult, div;
    cout << "Calculadora simples"<<endl;
    cout << "primeiro numero: "<< endl;
    cin >> num1;
    cout << "segundo numero: "<< endl;
    cin >> num2;

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    
    cout<< "soma: "<<soma<<endl;
    cout<< "subtracao: "<<sub<<endl;
    cout<< "multiplicacao: "<<mult<<endl;
    cout<< "divisao: "<<div<<endl<<endl;
  
    return 0;
}
