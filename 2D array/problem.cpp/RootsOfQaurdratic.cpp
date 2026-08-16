#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    float x1,x2,D;
    cout<<"enter the value of a,b,c"<<endl;
    cin>>a>>b>>c;
    D = b*b - 4*a*c;
    if(D<0){
        cout<<"Roots are the imaginary in nature"<<endl;
        
    }
    else { 
        if(D>0) {
        x1 = (-b + sqrt(D))/2*a;
        x2 = (-b- sqrt(D)/2*a);
        cout<<"Root is the x1 :"<<x1<<endl;
    cout<<"Root is the x2 :"<<x2<<endl;

    }

    
    else{
        x1 = x2 = -b/2*a;
        cout<<"Roots the equal and its value is:"<<x1<<endl;

    }

    }

}