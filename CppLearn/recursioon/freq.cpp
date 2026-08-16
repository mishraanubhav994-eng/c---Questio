#include <iostream>
#include<vector>
using namespace std;

int main() {
     vector<int>p ={1,2,3,1,2,4,5,6,3,4,5};
     int l =p.size();
     vector<int> freq(l+1, 0);
     for(int i=0; i<l; i++){
         freq[p[i]]++;
     }
     for(int i=0; i<l; i++){
         if(freq[i]==1) cout<<freq[i]<<endl;
     }

    return 0;
}