#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int k ,n;
    vector<int>v(n);
    
    cout<<"Enter the length to be reverse and kaha tak cut karna hai:\n";
    cin>>k>>n;
    for(int i =0; i<n; i++){
        cin>>v[i];
    }
    reverse(v.begin(), v.end());

    for(int i=0; i<n; i++){
        cout<<v[i];
    }


}