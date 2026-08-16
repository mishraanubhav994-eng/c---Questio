#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n ;
    cout<<"Enter no.:\n";
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int count =1;
    for(int i=0; i<n; i++){
        if(v[i]==v[i+1]){
            count++;
        }
    }

 cout<<count;
    
    
}