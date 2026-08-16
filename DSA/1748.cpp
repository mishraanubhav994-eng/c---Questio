#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
   
    vector<int>p= {1,2,2,3};
    int ans=0;
    for(int i=0; i<p.size(); i++){
        ans += p[i]^p[i+1];
    }
    cout<<"Sum of unique numbers is: "<<ans;

}