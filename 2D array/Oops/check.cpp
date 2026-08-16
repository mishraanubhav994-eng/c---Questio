#include<iostream>
using namespace std;
 
void prime(int a){
    if(a<2){
        cout<<"given number is not prime"<<endl;
    }
     else if(a == 2){
        cout<<"it is prime"<<endl;
    }
    else {
    for (int i=2; i<= a-1; i++){
        if(a%i ==0){
            cout<<"NOT A PRIME NUMBER"<<endl;
            break;
        }
    
         else {
        cout<<" PRIME NUMBER"<<endl;
        break;
    }
    }
    }
   
}
    int main(){
        int n;
        cout<<"enter a number "<<endl;
        cin>>n;
        prime(n);
    }