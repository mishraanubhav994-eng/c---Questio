#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"enter the string"<<endl;;
    getline(cin, str);
    //cin>>str;
    int count = 0;
    //cout<<str;
    for(int i = 0; i< str.length(); i++ ){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i'|| str[i] == 'o' || str[i] == 'u' ){
            count++;
        }
    }
    cout<<"THE NUMBER OF THE VOVEL IN THIS STRING IS :"<<count;
} 