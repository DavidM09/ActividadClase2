#include <iostream>

using namespace std;

int main (){

    float income;
    int tax;
    float resultado1;
    float resultado2;
    float resultadoTT;
    float resultadoTotal;

    cout <<"insert your monthly income "<< endl;
    cin >> income ;

    cout <<"select what tax do you want to calculate"<< endl;
    cout <<"1.ISSS"<< endl;
    cout <<"2.AFP"<< endl;
    cout <<"3.Renta"<< endl;
    cout <<"4.Total"<< endl;
    cin >> tax;

   switch (tax){
    
    if (income <= 1000){

    case 1:
    resultado1 = income * 3/100;
    cout <<"Your ISSS tax is: "<< resultado1 << endl;
    }
    else{
    }
    break;

    case 2:
    resultado2 = income * 7.25/100;
    cout <<"your AFP tax is: "<< resultado2 << endl;
    break;

    case 3:
    if (income <= 472){
        cout <<"you dont need to pay rent tax"<< endl;
    }
    else if (income >= 472.01 && income <= 895.24){
    resultadoTT = income * 10/100;
    cout <<"your rent tax is: "<< resultadoTT << endl;}
    else if (income >= 895.25 && income <= 2038.10){
    resultadoTT = income * 20/100;
    cout << "your rent tax is: " << resultadoTT << endl;
    }
    else if (income >= 2038.10){
    resultadoTT = income * 30/100;
    cout <<"your rent tax is: " << resultadoTT << endl; 
    }
    else{

    }
    break;
    
    case 4:
    resultadoTotal = income - resultado1 - resultado2 - resultadoTT;
    cout <<"Your total income with taxes is: "<< resultadoTotal << endl;
   
    


   }
 return 0;
}















   
