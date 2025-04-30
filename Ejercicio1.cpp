#include <iostream>

using namespace std;

int main (){

    int numero;
    int resultado;

    cout <<"ingrese algun numero del 1-7: " ;
    cin >> numero;

    switch (numero){
        case 1:
        resultado = 1;
        cout <<"lunes"<< endl;
        break;
        case 2:
        resultado = 2;
        cout <<"martes"<< endl;
        break;
        case 3:
        resultado = 3;
        cout <<"miercoles"<< endl;
        break;
        case 4:
        resultado = 4;
        cout <<"jueves"<< endl;
        break;
        case 5:
        resultado = 5;
        cout <<"viernes"<< endl;
        break;
        case 6:
        resultado = 6;
        cout <<"sabado"<< endl;
        break;
        case 7:
        resultado = 7;
        cout <<"domingo"<< endl;
        break;
        default:
            cout <<"su numero es incorrecto"<< endl;
            return 1;

    }



    return 0;

}