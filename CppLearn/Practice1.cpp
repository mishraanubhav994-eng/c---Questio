#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cout<<"enter the value of n: \n";
    cin>>n;
    vector<int> v(n);
    vector<int> k;
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }
    vector<int>:: iterator;
    
    k.swap(v);
    
    
    for(auto n: k){
        cout<<n<<" ";
    }
    v.erase(v.begin(), v.begin()+3);
    cout<<"\n";
    for(auto p: v){
        cout<<p<<" ";
    }
    // for(int i =0; i<v.size(); i++){
    //     cin>>v[i];
    // }
    // vector<int>:: iterator it;
    // it = v.begin();
    // while(it != v.end()){
    //     if(*it % 2 == 0){
    //         v.erase(it);
    //     }
    //     else it++;
    // }
    // for(it = v.begin(); it != v.end(); it++){
    //     cout<<*it<<" ";
    // }
    // for(auto n: v){
    //     cout<<n<<" ";
    //     n++;
    // }
    
    return 0;
}