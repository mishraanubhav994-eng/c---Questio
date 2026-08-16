#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    int a;
    cout<<"enter a: ";
    cin>>a;

    int b;
    cout<<"enter b: ";
    cin>>b;

    int j = 2;
    int lcm = 1;
    for(int i = 0; a>1 || b>1; i++){
        if(a%j == 0 && b % j == 0){
            lcm = lcm * j;
            a = a/j;
            b = b / j;
        }
        else if(a%j == 0 && b % j != 0){
            lcm = lcm * j;
            a = a / j;
        }
        else if(a%j != 0 && b % j == 0){
            lcm = lcm * j;
            b = b / j;
        }
        else j++;
    }

    cout<<lcm;
    
    return 0;
}