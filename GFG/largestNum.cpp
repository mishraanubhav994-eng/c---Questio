#include<iostream>
using namespace std;
int main(){
    class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
         int n = arr[0];
    
    for(int i = 0; i < arr.size(); i++){
    if(arr[i]> n){
        n = arr[i];
    }
    }
    return n;
    }
};
}
