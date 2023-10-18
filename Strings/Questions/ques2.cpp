// USING CONSTRUCTORS IN CLASS
#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
        string name;
        int age;

    public:
        Person(){
            cout<<"Default Constructor called"<<endl;
        }

        void setName(string naam){
            name = naam;
        }

        void setAge(int umar){
            age = umar;
        }

        void display(){
            cout<<"Name of current object : "<<name<<endl;
            cout<<"Age of Current object : "<<age<<endl;
        }
};

int main(){
    string  name;
    int age;
    cin >> name >> age;
    
    Person p;
    p.setName(name);
    p.setAge(age);

    p.display();

    return 0;
}


// MIHIRR42
