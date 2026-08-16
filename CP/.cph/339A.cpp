#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    string ans ="";
    for(char c : s){
       if( c != '+'){
        ans += c;
       }
    }
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i];
        if(i != ans.size()-1){
            cout<<"+";
        }
    }
    

}
