#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n ;
    cout<<"Enter the size of the vector:\n";
    cin>>n;
    vector<int>v(n);
    //vector<int>p;
    
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int l =0; 
    int h =n-1;
    while(l<h){
        if(v[l]<0){
            l++;
        }
        else if(v[h]>=0){
            h--;
        }
        else{
            swap(v[l], v[h]);
        }
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}