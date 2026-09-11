#include <iostream>
using namespace std;

class food{
    protected:
        int x = 3;

    private:
        int n = 2 ;
    public:
        void eating(){
            cout<<"ummm...."<<n << x;
        }
    
};
    
class junkFood : private food{
    public:
    void get(){
        eating();
    }
    void health(){
        cout<<"\nbad"<<x;
    }
        
};

int main(){
    
    junkFood momo;

    // momo.eating();
    momo.get();
    momo.health();
    

    return 0;
}