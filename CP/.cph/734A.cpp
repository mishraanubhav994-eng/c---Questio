#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n ;
    cin>>n;
    string s;
    int anton =0;
    int danik =0;
    cin>>s;
    for(int i=0; i<n; i++){
        
        
        if(s[i] == 'A') anton++;
        else danik++;

    }
    if(anton > danik) cout<<"Anton";
    else if(anton<danik) cout<<"Danik";
    else cout<<"Friendship";
    return 0;
    
}