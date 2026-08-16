#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]==nums[j]){
                continue;
            }else{
                i++;
                nums[i] = nums[j];
            }
        }
    
for(int x=0; x<i+1; x++){
    cout<<nums[x];
}
    return 0;
}