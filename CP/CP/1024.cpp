#include <bits/stdc++.h>
using namespace std;

int main() {
    
	
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n<x){
            cout<<"NO\n";
        }
        if(n%2 != 0){
            if(x%2 == 0) cout<<"NO\n";
            else cout<<"yes\n";
        }
        else{
            if(x%2 == 0) cout<<"yes\n";
            else{
                cout<<"yes\n";
            }
            
        }
    }

}
