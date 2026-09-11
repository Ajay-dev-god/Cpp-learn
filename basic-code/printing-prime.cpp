#include <iostream>
using namespace std;

int main(){

    int n;
    bool p = true;

    cout<<"prime numbers:"<<endl<<"2 ";
    
    for (n = 3; n<100; n++){
        for (int i = 2; i < n; i++){
            if(n%i==0){
                p=false;
                break;
            }
        }
        if(p==true)cout<<n<<" ";
        p=false;
    }

    cout<<endl;

    return 0;
}