#include <iostream>
#include<vector>
#include<algorithm>
#include<deque>
using namespace std;

void max_window(vector<int>&arr, int k){
    deque<int>dq;
    for(int i=0; i<k; i++){
        while(not dq.empty() and arr[dq.back()]<arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
}

int main() {
    
    return 0;
}