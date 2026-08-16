#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of nums:\n";
    cin>>n;
    int es =0;
    int ds =0;
  vector<int>nums(n);

   n = nums.size();

  for(int i =0; i<n; i++){
    cin>>nums[i];
  }
  for(int i=0; i<n; i++){
      es += nums[i];
  }

  for(int i=0; i<n; i++){
    if(nums[i]>=10){
        while(nums[i]>0){
        int k = nums[i]%10 ;
        ds += k;
        nums[i] =nums[i]/10;

        }
    
    } else ds += nums[i];
    
  }

  cout<<"Elemental sum is :"<<es<<"\n";
  cout<<"digit sum is: "<<ds<<"\n";
  cout<<abs(es-ds);


    
    return 0;
}