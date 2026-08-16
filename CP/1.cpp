#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N;
    cin>>N;
    int A[N];
    int even =0;
        int odd =0;
    for(int i=0; i<N; i++){
        
        cin>>A[i];
        
    }
    for(int i=0; i<N; i++){
        
        if(A[i]%2==0) even++;
        else odd++;
    }
    if(even>odd) cout<<"READY FOR BATTLE";
    else cout<<"NOT READY";

}
