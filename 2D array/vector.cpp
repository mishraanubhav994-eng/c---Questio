#include<iostream>
#include<vector>
using namespace std;
 int main(){
    vector<int>v{3,5,2,1,4,6,8,5};
    //vector<int>::iterator it;
    for(auto it = v.begin();it != v.end(); it++){
        cout<<*it<<" ";
        }
        cout<<endl;
     v.erase(v.begin(), v.begin()+3);
     for(auto it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
        v.clear();
        for(auto it = v.begin(); it != v.end(); it++){
            cout<<*it<<" ";
        }
     }
   
 }