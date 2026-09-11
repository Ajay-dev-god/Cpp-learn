#include <iostream>
using namespace std;

class car{
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

    car BMW;

    BMW.set_details("BMW",24,"USA");
    BMW.get_details();
    

    return 0;
}