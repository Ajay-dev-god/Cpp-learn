#include <iostream>
using namespace std;

int main(){

    int n ;
    bool p = true;

    cout<<"Enter number: ";
    cin>>n;

    if(n==1)cout<<"1 is not a prime number.";
    else{
        for (int i = 2; i < n; i++){
            if(n%i==0){
                p=false;
                break;
            }
        }
        if(p==false)cout<<n<<" is not prime number.";
        else{
            cout<<n<<" is prime number.";
        }
    }

    cout<<endl;

    return 0;
}