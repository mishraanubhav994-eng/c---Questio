#include <iostream>
using namespace std;

int main() {
   int T;
   int N;
   cin>>T;
   
   for(int i=0; i<T; i++ )
   
   cin>>N;
   int rev =0;
        while(N>0){
            int r = N%10;
            rev = rev *10;
            rev = rev+r;
            
            N = N/10;
            if(N<=0) cout<<rev<<endl;
        } 
        
}
