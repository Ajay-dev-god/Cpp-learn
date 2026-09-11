#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n ,nsize=0,nrev=0,ntemp;

    cout<<"enter number: ";
    cin>>n;

    ntemp = n; 

    while(ntemp>0){
        ntemp/=10;
        nsize++;
    }
    ntemp = n;
    // cout<<nsize;

    while(nsize>0){
        nsize--;
        int bn = ntemp%10;
        // cout<<bn<<endl;
        nrev+= bn*pow(10,nsize);
        ntemp/=10;
    }

    if(n==nrev)cout<<n<<" is palindrone number.";
    else{
        cout<<n<<" is not palindrone number.";
    }

    cout<<endl;
    return 0;
}