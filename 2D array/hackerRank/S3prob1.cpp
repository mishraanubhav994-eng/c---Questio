#include<iostream>
//#include<strinf
#include<string>
using namespace std;
int main(){
    string a ;
    string b ;
    cin>>a>>b;
    string x;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<(a+b)<<endl;
     x = b[0];
    //a[0] = b[0];
    b[0]= a[0];
    a[0]= x[0];
    cout<<a<<" "<<b;
    return 0;
}
