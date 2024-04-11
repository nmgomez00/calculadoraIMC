#include<iostream>

#include<iomanip>

#include<math.h>
using namespace std;

/*
[] declarar variables float para peso, altura y el imc(resultado)
[] pedir al usuario su peso altura
[] calcular imc
[] mostrar resultado
[] evaluar que el tipo que tiene y mostrarlo.

*/
void fimc();

int main(){
 float userPeso,userAltura,imc;

    cout << "Ingrese su peso en kilos" << endl;
    cin >> userPeso;
    cout << "Ingrese su altura en metros" << endl;
    cin >> userAltura;

    imc = userPeso / pow(userAltura,2);

    cout<< "Su imc es : " <<setprecision(4) << imc << endl;

       if(imc<16.5){
          cout << "Bajo peso severo" << endl;
     }else if(16.5 <= imc && imc <18.5 ){
          cout << "Bajo peso" << endl;
     }else if(18.5 <= imc && imc <25 ){
          cout << "Peso normal" << endl;
     }else if(25 <= imc && imc <30 ){
          cout << "Sobrepeso" << endl;
     }else if(30 <= imc && imc <35 ){
          cout << "Obesidad tipo 1 (moderada)" << endl;
     }else if(35 <= imc && imc <40 ){
          cout << "Obesidad tipo 2 (severa)" << endl;
     }else{
          cout << "Obesidad tipo 3 (morbida)" << endl;
     }
}
