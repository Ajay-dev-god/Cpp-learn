#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter a number: ";
    cin>>n;

    if(n>0){
        cout<<n <<" is positive number."; 
    }else if(n<0){
        cout << n << " is not positive number.";
    }else {
        cout<< "n is 0.";
    }
    
    return 0;
}