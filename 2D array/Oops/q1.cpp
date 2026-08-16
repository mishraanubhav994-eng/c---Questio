#include<iostream>
using namespace std;

int swap(int* c, int* d){
    int temp;
     temp = *c;
    *c = *d;
    *d = temp;
   
}

int main(){
    int a,b;
    cout<<"Enter the two number"<<endl;
    cin>>a>>b;
    int temp;
    swap(&a,&b);
     cout <<"the value of a change to b"<<a<<endl;
    cout<<"the value of b chnge to a :"<< b<<endl;
    return 0;


}