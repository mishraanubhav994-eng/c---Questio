#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

    void bubble(vector<int> &v){
        for(size_t i=0; i< v.size()-1; i++){
            for(size_t j =0; j<v.size()-1-i; j++){
                if(v[j]> v[j+1]){
                    swap(v[j],v[j+1]);
                }
            } 
        }
        

    }
    int main(){
        int n;
        cout<<"Enter the value of N: \n";
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<v.size(); i++){
            cin>>v[i];
        }
        bubble(v);
        for(auto k: v){
            cout<<k<<" ";
        }
        
    
    
    return 0;
}