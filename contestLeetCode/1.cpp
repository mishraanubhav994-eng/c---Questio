#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count =0;
    int odd1 =0;
    int index =0;
    //vector<int>k(n);
    
    vector<int>v(n);
    vector<int>k(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i =0; i<n; i++){
        if(v[i] % 2 != 0){
            count ++;
            odd1++;
            index = i;
        }
        
   }
   if(count ==0) {
    cout<<"True";}
    else if(odd1 == 1){
      for(int i =0; i<n; i++){
        k[i]= v[index]-v[i];
      }
      cout<<"True";
      
   }
   else if(odd1>1){
    

   }
    
    return 0;
}