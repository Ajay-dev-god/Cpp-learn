#include <iostream>
using namespace std;

class box{
private:
    int id;
    string name;
public:
    void set_detail(int d,string n);
    void get_detail();

};

void box::set_detail(int d,string n){
    id = d;
    name = n;
}

void box::get_detail(){
    cout<<"Id : "<<id<<"\n";
    cout<<"name : "<<name<<"\n";
}

int main(){
    box fruitbox;

    fruitbox.set_detail(1,"apple");
    fruitbox.get_detail();
    

    return 0;
}