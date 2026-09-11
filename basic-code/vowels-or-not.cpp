#include <iostream>
using namespace std;

int main(){

    cout<<"Enter a character: ";
    char c = getchar();

    if(c=='a' || c=='e' || c=='i' || c=='o'|| c=='u'){
        cout<<"character is vowel.";
    }else{
        cout<<"character is consonant.";
    }

    cout<<endl;

    return 0;
}