#include<iostream>
#include<vector>
using namespace std;
 int main(){
    vector<int>v(8);
    for(int i = 0; i<8; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(int i = 0; i<8; i++){
        cout<<v[i]<<" ";
    }

 }