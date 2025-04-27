// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int año;
    int mes;
    cin>>mes>>año;
      //operaciones para determianr si es año bisiesto
    int div400, div100, div4;
    div400=año%400;
    div100=año%100;
    div4=año%4;
    
    if(div400==0 || div4==0 and div100!=0){
        if(mes==2){
            cout<<"29";
        }else if(mes==4||mes==6||mes==9||mes==11){
            cout<<"30";
        }else{
            cout<<"31";
        }
    }else{
        if(mes==2){
            cout<<"28";
        }else if(mes==4||mes==6||mes==9||mes==11){
            cout<<"30";
        }else{
            cout<<"31";
    }
    }

    return 0;
}
