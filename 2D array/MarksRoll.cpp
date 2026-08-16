#include<iostream>
using namespace std;
void input(int arr[4][2]){
    
    cout<<"Enter the Number and MArks:\n";
    for(int i= 0; i<4; i++){
       cin>>arr[i][0]>>arr[i][1]; 
    }
} 
void display( int arr[4][2]){
        for (int i=0; i<4; i++){
            cout<<"The marks obtained is :"<<arr[i][0]<<" | "<<arr[i][1]<<endl;
        }

    }


int main(){
  
    int arr[4][2];
    input(arr);
    display(arr);

}