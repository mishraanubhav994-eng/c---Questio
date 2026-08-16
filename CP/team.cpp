#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter the number of problem\n";
    cin>>n;
    int ans;
    int check =0;
    for(int i=0; i<n; i++){
        int count =0;
        for(int j=0; j<3; j++){
        cout<<"enter the number 1 or 0\n";
        cin>>ans;
        if(ans == 1) count++;
           
        }
        if(count>=2) check++;
        
        
    }
    cout<<check;
}