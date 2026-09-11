#include <iostream>
using namespace std;

int main(){

    int a ; 
     
    cout<<"Enter a number: ";
    cin>>a;

    if(a == 1){
        cout<<a<<" is odd.";
    }else if(a%2 ==1){
        cout<<a<<" is odd";
    }else{
        cout<<a<<" is even";
    }

    cout<<endl;
    return 0;
}