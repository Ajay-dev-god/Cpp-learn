#include <iostream>
using namespace std;

int main(){

    int n ;
    int first=1,second=2 ,temp;

    cout<<"Enter number: ";
    cin>>n;

    cout<<"fibonacci : ";
    cout<<first<<" "<<second<<" ";
    for (int i = 0; i < n; i++)
    {
        temp = second;
        second+=first;
        first =temp;
        cout<<second<<" ";
    }
    

    return 0;
}