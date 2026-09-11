#include <iostream>
using namespace std;

int main(){

    int year;

    cout<<"Enter year: ";
    cin>>year;

    if(year%4 == 0 ){
        cout<<year<<" is";
    }else{
        cout<<year<<" is not";
    }

    cout<<" leap year.";

    return 0;
}