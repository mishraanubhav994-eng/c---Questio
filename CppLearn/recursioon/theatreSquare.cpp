#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    int n;
    cin>>n;

    int m;
    cin>>m;

    int a;
    cin>>a;

    int count = 0;

    long long area = n*m;

    if(a > n && a > m){
        cout<<1;
    }
else{
    if(n - a >= 0){

        while(n > 0){
            count++;
            n = n - a;
            area = area - a*a;
        }

    }

    if(m - a >= 0 && area > 0){
        
        count = count * 2;

    }
    cout<<count;
}

    
    
    return 0;
}