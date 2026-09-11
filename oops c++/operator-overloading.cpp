#include <iostream>
using namespace std;

class complex{
    int real , image;
    public:
        complex(int i = 0 ,int j = 0 ){
            real = i;
            image = j;
        }
        // friend complex operator+(complex c1 ,complex c2){
        //     complex temp;
            
        //     temp.real = c1.real + c2.real;
        //     temp.image = c1.image + c2.image;
        //     return temp;
        // }
        complex operator + (complex c) {
            return complex(real + c.real,image + c.image);
        }
        void display(){
            cout<<real<<" + "<<image<<"i";
        }
};

int main(){
    complex ob1(2,5),ob2(1,3);

    complex ob3;

    ob3 = ob1 + ob2;
    
    ob3.display();
    return 0;
}