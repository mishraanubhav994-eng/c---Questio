#include<iostream>
#include<string>
using namespace std;

class Human{    //Parents class
    public:
    int age;
    string name;


};
 class newone: public Human{ //child class
    public:
    void print(){
        cout<<this->age;
    }
    

 };
 
    int main(){
     newone p1;
    //  p1.age = 18;
    //  p1.name = "Anubhav mishra";
     cout<<p1.age;
     //cout<<p1.age<<endl<<p1.name<<endl;
     return 0;

    }