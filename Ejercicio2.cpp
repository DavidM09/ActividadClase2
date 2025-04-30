#include <iostream>

using namespace std;

int main (){

    double Moneda;
    double Resultado;
    double MontoJPY = 0.0070;
    double USD;
    double JPY;
    double Monto;
    
    cout <<"ingrese el tipo de moneda que desea convertir: "<< endl;
    cout <<"1. USD to JPY" << endl;
    cout <<"2. USD to GBD" << endl;
    cout <<"3. USD to EUR" << endl;
    cin >> Moneda;

    cout <<"ingrese el monto a convertir: "<< endl;
    cin >> Monto;

    switch (Moneda) {
        case 1:
        MontoJPY = USD * MontoJPY;
        cout <<"Este es el resultado de su conversion: " << endl;
        break;
    

    }






    return 0;
}