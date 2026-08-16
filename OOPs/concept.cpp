#include<iostream>
using namespace std;

class animal{
    public:
   virtual void speak(){
        cout<<"speaking:"<<endl;
    }

};
class dog:public animal{
    public:
    void speak(){
        cout<<"barking:"<<endl;
    }

};


int main(){
    dog a;
    a.speak();
    // animal b;
    // b.speak();
    //upcasting
    animal* c = new dog();
    c->speak();

    //downCasting
    dog* d = (dog*)new animal();
    d->speak();

    return 0;
    
}
