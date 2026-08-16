#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    
    // char str[n];
    // for(int i =0; i<n; i++){
    //     cin>>str[i];
    // }
    string str;
    cin>>str;
    string p = str;
    cout<<"Reversing the string"<<endl;
     reverse(p.begin(), p.end());
    cout<<"Reversing the string :"<<p<<endl;
    if(str == p){
        cout<<"string is palindrome"<<endl;
    }else cout<<"String is not a Palindrome "<<endl;
}