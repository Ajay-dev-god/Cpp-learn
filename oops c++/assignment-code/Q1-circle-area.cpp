#include <iostream>
using namespace std;

const float PIE = 3.14;

class circle{
    private:
        float radius;

    public:
        void set_radius(){
            cout<<"Enter the radius : ";
            cin>>radius;
        }
        void area(){
            cout<<"Area of Circle = "<<PIE*radius*radius; 
        }
        void circumference(){
            cout<<"\ncircumference of Circle = "<<2*PIE*radius; 
        }


};

int main(){

    circle ball;

    ball.set_radius();

    ball.area();
    ball.circumference();

    return 0;
}