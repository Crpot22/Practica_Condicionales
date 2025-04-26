// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    int limit = 30000;
    int calc;
    int calc1;
    cin>>a>>b>>c;
    if(a<=limit&&b<=limit&&c<=limit){
        
        calc=(c*c);
        calc1=(a*a)+(b*b);
        if(calc==calc1){
        cout<<"Yes"<<endl;
        }else if (calc1<=calc){
            cout<<"Undefined"<<endl;
        }else
        cout<<"No"<<endl;
        
    }else{
        cout<<"Los valores superan 30,000";
    }
    
    

    return 0;
}
