#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double b, h;
    double hypo = 0;
    cout<<"Enter the value of b,h"<<endl;
    cin>>b>>h;
    hypo = sqrt(b*b + h*h);
    cout<<hypo;

}