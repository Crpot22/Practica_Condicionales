#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    
    if (y1==y2||x1==x2||(x1-x2 ==y1-y2)||(x1-x2==y2-y1)){
        cout<<"Yes";
    } else{
        cout<<"No";
    }
    
    return 0;
}
