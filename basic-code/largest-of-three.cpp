#include <iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"Enter three number: ";
    cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<a;
    }else if(b>c){
        cout<<b;
    }else{
        cout<<c;
    }

    cout<<" is largest.";

    return 0;
}