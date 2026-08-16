#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    string s;
    cin>>s;
    int uc = 0;
    int lc =0;
    int n = s.size();
    for(int i=0; i<n; i++){
        if(s[i]>=60 && s[i] <=90){
            uc++;
        }
        else lc++;
    }
    if(lc>= uc){
        for(char &c: s){
            c = tolower(c);
        }
    }
    else {
        for(char &c: s){
            c = toupper(c);
        }
    }
    cout<<s;
    
    return 0;
}