#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    int n;
    cin>>n;

    string k = "";
    vector<string>v(n);
    for(int i =0; i<n; i++){
        cin>>v[i];
    }

    for(int i=0; i<n; i++){
    if(v[i].size()<=10){
            cout<<v[i];
    }
    else{
         k = v[i][0] + v[i].size()-2 + v[i][v[i].size()-1];
         cout<<k;
    }
    cout<<endl;
}

    cout<<k;
    return 0;
}