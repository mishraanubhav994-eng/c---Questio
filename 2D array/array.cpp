#include<iostream>
#include<vector>
using namespace std;

void change(int arr[]){
    arr[0]=9;
}

    int main(){
        int arr[3]= {1,2,3};
        change(arr);
        cout<<arr[0]<<endl;


    }
