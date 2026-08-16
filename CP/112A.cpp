#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    for(char &c : s1){
        c = tolower(c);
    }
    for(char &d : s2){
        d = tolower(d);
    }
     int count1 =0;
     int count2 =0;
    for(int i=0; i<s1.length(); i++){
        if(s1[i] > s2[i]){
            cout<<1;
            count1++;
            break;
        }
        else if(s2[i]> s1[i]){
            cout<<(-1);
            count2++;
            break;
        }
        
    }
    if(count1 == 0 && count2 == 0){
        cout<<0;
    }
   






}