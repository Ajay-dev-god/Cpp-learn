#include <iostream>
using namespace std;

int calculate(char syb , int a, int b){
    if (syb == '-'){
        return a-b;
    }
    else if (syb == '+'){
        return a+b;
    }
    else if (syb == '*'){
        return a*b;
    }
    else if (syb == '/'){
        return a/b;
    }else{
        return 0;
    }
}

int main(){

    int a,b;
    

    
    cout<<"calculator:";
    cin >> a ;
    char syb = getchar();
    cin >> b;

    cout<< calculate(syb,a,b)<<endl;


    
    return 0;
}