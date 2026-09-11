#include <iostream>
using namespace std;

class book{
    int price;

    public:
        book(int price){
            this->price =price;
        }
        book &increase(int x){
            price+= x;
            return *this;
        }
        void show(){
            cout<<price<<endl;
        }
};

int main(){
    
        book hindi(100);

        hindi.increase(12).increase(3).show();

    return 0;
}