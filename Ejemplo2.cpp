#include <iostream>

using namespace std;

int main (){



    // declaracion de variables para almacenar los numeros y el resultado
    Float num1, num2, num3, resultado;
    int opcion;

    //solicitar al usuario que ingrese 2 numeros
    cout <<"ingrese el primer numero: "<< endl;
    cin >> num1;

    cout << "ingrese el segundo numero: " << endl;
    cin num2;

    //  mostrar el menu de opciones a elegir la opcion matematica
    cout <<" selecione una operacion" << endl;
    cout <<"1. suma" << endl;
    cout <<"2. resta" << endl;
    cout <<"3. multiplicacion " << endl;
    cout <<"4. division" << endl;
    cout <<"opcion :"<< endl;
    cin >> opcion;



    // usar un switch para realizar la operacion matematica segun se haya dicho 
    switch (opcion){
        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                cout << "El resultado de la suma es: " << resultado << endl;
                break;
            case 2:
                resultado = num1 - num2;
                cout << "El resultado de la resta es: " << resultado << endl;
                break;
            case 3:
                resultado = num1 * num2;
                cout << "El resultado de la multiplicación es: " << resultado << endl;
                break;
            case 4:    
    // verifica si el segundo numero es cero antes de realiza la division  
                if (num2 != 0){
                resultado = num1/num 2
                cout << "El resulado de la division es: "<< resultado << 
            
            }
            else {
                cout <<"Error: Division por cero no permitida. " << endl;
            }
            break;

        default: 
        cout <<"Opción no válida. Por favor, elija una opción del 1 al 4." << endl;
            return 1; // Salida temprana del programa si la opción no es válida
    }

    // Usar if-else para verificar si el resultado es positivo, negativo o cero
    if (resultado > 0) {
        cout << "El resultado es positivo." << endl;
    } else if (resultado < 0) {
        cout << "El resultado es negativo." << endl;
    } else {
        cout << "El resultado es cero." << endl;
    }

    return 0; // Fin del programa
}


    }



    return 0;
}