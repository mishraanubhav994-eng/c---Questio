#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
      int n;
      cout<<"Enter the Number :\n";
      cin>>n;
     int k = pow(n,0.5);
      if(fmod(k,1.0) == 0.0){
        cout<<"Number is the perfect square:\n";
      } 
      else cout<<"Number is not perfect Square:\n";
    return 0;
}