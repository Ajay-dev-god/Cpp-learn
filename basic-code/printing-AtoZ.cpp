#include <iostream>
using namespace std;

int main(){

    char c = 'A';
    int n = 26;

    for (int i = 0; i < n; i++)
    {
        cout<< c << " ";
        c = c + 1;
    }
    

    return 0;
}