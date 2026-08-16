#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[6]= {2,4,5,6,7,6};
    sort(arr, arr+6);
    cout<<"sorted array in ascending order"<<endl;
     for(int i =0; i <6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,arr+6);
     for(int i =0; i <6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"sorted array in descending order"<<endl;

    
   

}