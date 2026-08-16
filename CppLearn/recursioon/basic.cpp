#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 

void change(int n,int i){
    cout<<i<<" ";
    if(i==n) return ;
    else i++;
    change( n , i);
    
}

int main() {
    int n ;
    cout<<"Enter the number :\n";
    cin>>n;
    int i =1;
    change(n,i);
}