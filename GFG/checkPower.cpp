#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
bool power(int a, int b){
    bool check = false;
     for(int i =1; i<=b; i++){
        if(pow(a,b)== b){
            check = true;
        }
     }
     return check;
}

int main() {
    int a , b;
    cout<<"Enter the value of A and B :\n";
    cin>>a>>b;
    power(a,b);

    
    return 0;
}