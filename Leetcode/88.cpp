#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
     int n,m;
    cout<<"Enter the sizes of vectors:\n";
    cin>>n>>m;
    vector<int>v(n);
    vector<int>p(m);
    vector<int>c(n+m);
   
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<m; i++){
        cin>>p[i];
    }
    for(int i=0; i<n; i++){
        c.push_back(v[i]);
    }
    v.erase(v.begin(), v.end());
    cout<<v.size()<<endl;

   // return 0;
}