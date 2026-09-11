#include <iostream>
using namespace std;

class box{
private:
    int id;
    string name;
public:
    box(int i,string n){
        id =i;
        name =n;
    }
    void get_detail();

};



void box::get_detail(){
    cout<<"Id : "<<id<<"\n";
    cout<<"name : "<<name<<"\n";
}

int main(){
    box fruitbox( 1 ,"apple");

    fruitbox.get_detail();
    

    return 0;
}