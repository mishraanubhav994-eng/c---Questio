#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    vector<string> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }

    for(int i = 0; i<n; i++){
        if(v[i].size() <= 10){
            cout<<v[i];
        }
        else{
            cout<< v[i][0] << v[i].size() - 2 << v[i][v[i].size() - 1];
            // cout<<k;
        }
        cout<<endl;
    }

    return 0;
}