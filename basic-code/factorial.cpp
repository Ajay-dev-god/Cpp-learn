#include <iostream>
using namespace std;

int main(){

    int n;
    long int fact = 1;

    cout<<"Enter number: ";
    cin>>n;

    cout<<"factorial: "<<n<< "! = ";

    for (int i = 1; i <= n; i++)
    {
        fact*=i;
        if(i==n){
            cout<<i;
            break;
        }
        cout<< (n-i)+1 <<" X ";
    }

    cout<<" = "<<fact<<endl;
    
    return 0;
}