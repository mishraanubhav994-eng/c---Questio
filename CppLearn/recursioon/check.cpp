#include<iostream>
using namespace std;



// Very Important -- Base cases
    // Trust your function 
int sum(int x){
    int p =0;
    while(x>0){
        int r = x%10;
        p += r;
        x = x/10;
        
    }

}
int main(){
    int n;
    cin>>n;
    int ans = sum(n);
}
  
    
