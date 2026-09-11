#include <iostream>
using namespace std;

class person{
    private:
        string name;
        int age;
        string country;

    public:
        void set_details(string n , int a , string c){
            name = n;
            age = a;
            country = c;
        }
        void get_details(){
            cout<<"name : "<<name<<"\n";
            cout<<"age : "<<age<<"\n";
            cout<<"country : "<<country<<"\n";
        }

};

int main(){

    person jonny;

    jonny.set_details("jonny",24,"USA");
    jonny.get_details();
    

    return 0;
}