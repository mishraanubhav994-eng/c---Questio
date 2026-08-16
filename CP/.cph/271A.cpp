#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int c = n;
    
    vector<int>v;
    while(c>0){
        int r = c%10;
        v.push_back(r);
        c = c/10;
    }
    int x = v.size();

    for(int i = n+1; i<9000; i++){
        int temp = i;
        int ans =0;
         set<int>s;
         bool check = false;
        while(temp>0){
            int r = temp%10;
            s.insert(r);
            temp = temp/10;

        }
        int y = s.size();
        if(x == y){
            cout<<i;
            check = true;
            break;
        }
    }



    
}