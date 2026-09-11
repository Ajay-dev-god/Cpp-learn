#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;

    cout<<"armstrong numbers between 1 to 1000:"<<endl;
    cout<<"1 to 9 are armstrong numbers"<<"\n";
    for (n = 10; n < 1000; n++){
        int i , tn ,tm,tp =0;
    
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

        if(n==tp)cout<<n<<"\n";
        
    }
    return 0;
}