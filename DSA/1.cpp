#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n ;
    cout<<"Enter the size of the vector:\n";
    cin>>n;
    vector<int>v(n);
    vector<int>p;
    
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<"Array is taken by the user:\n";
     for(int i=0; i<n; i++){
        if(v[i]>0){
          p.push_back(v[i]);  
        }
     } 
     for(int i=0; i<n; i++){
        if(v[i]<0) p.push_back(v[i]);
     }

     cout<<"Printing the array after moving negative number to the left:\n";
     for(int i=0; i<n; i++){
        cout<<p[i]<<" ";
     }
    
    return 0;
}