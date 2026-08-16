#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 1;
    cout<<"enter the lenght of the arrray";
    cin>>n;
    vector<int>candyType(n);
    for(int i=0; i<n; i++){
        cin>>candyType[i];
    }
    sort(candyType.begin(), candyType.end());
     for(int i=0; i<candyType.size(); i++){
        if(i<candyType.size()-1&&candyType[i]!=candyType[i+1]){
            count++;
        }
        if(count>=candyType.size()/2){
            break;
        }
     }
     
  cout<<count;

}