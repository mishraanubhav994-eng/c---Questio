#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    
    // int n ;
    // cout<<"Enter the size of array vector:\n";
    // cin>>n;
    vector<int>v[3];
    // v[0].push_back(4);
    // v[0].push_back(22);
    // v[0].push_back(12);
    // v[1].push_back(5);
    // v[1].push_back(67);
    // v[2].push_back(90);
    // v[2].push_back(76);
    for(int i=0; i<3; i++){
        int n;
        cout<<"Enter the size of vector:\n";
        cin>>n;
        for(int j=0; j<n; j++){
            int a;
            cin>>a;
            v[i].push_back(a);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j <v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
    }

}