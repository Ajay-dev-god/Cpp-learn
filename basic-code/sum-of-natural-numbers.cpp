#include <iostream>
using namespace std;

int main(){

    int n,sum;

    cout<<"Enter number: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    
    cout<<"sum of "<<n<<" natural numbers : "<<sum<<endl;

    return 0;
}
