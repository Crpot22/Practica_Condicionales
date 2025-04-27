// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int año;
    cin>>año;
    int b, c, d;
    b=año%400;
    c=año%100;
    d=año%4;
    
    if(b==0 || d==0 and c!=0){
        cout<<"Yes";
    }else{
    cout<<"No";
    }

    return 0;
}
