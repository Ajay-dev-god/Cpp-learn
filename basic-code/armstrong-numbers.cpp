#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n, i , tn ,tm,tp =0;

    cout<<"Enter a number: ";
    cin>>n;

    tn = tm = n;
 
    for ( i = 0; tn >0; i++){
        tn-=tn%10;
        tn/=10;
    }
    // cout<<i<<" ";
    while (tm>0){
        int d =tm%10;
        tp+=pow(d,i);
        
        tm/=10;
    }
    // cout<<tp;

    if(n==tp)cout<<"yes,"<<n<<" is armstrong number.";
    else{
        cout<<"not, "<<n<<"  is not armstrong number.";
    }

    return 0;
}