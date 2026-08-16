#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    if(n<0){
        n=n*(-1);
        cout<<"Absolute number is. "<<n<<endl;
    }
    else
    cout<<"Absoluter number is "<<n;
}
