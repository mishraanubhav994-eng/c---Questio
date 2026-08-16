#include<iostream>
#include<vector>
using namespace std;
 int main(){
    int n ;
    cout<<"Enter the lenght of the vector arr"<<endl;
    cin>>n;
        vector<int>arr(n);
        for(int i =0; i <n; i++){
            cin>>arr[i];
        }
        int lar = INT_MIN;
        int sec = INT_MIN;
        for(int i =0; i < arr.size(); i++){
            if(arr[i]> lar){
                sec = lar;
                lar = arr[i];
            }
            
            else if(arr[i]<lar && arr[i]>sec){
                sec = arr[i];
            }
        }
        cout<<sec;
    }
    


 
