#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int a,b;
    cout<<" ENTER THE A AND B :\n";
    cin>>a>>b;
    int fact =1;
    for(int i=1; i< max(a,b); i++){
        if(a%i == 0 && b%i ==0){
            fact *= i;
            a = a / i;
            b = b / i;
        }
        else if( a%i != 0 && b%i != 0){
            fact *=i;
        }
        else if(a%i != 0 && b%i == 0){
            fact = fact * i;
        }
    } 
    
    cout<<fact;
    
    return 0;
}