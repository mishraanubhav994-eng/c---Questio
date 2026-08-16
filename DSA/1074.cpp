#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    string s ="aabccdkkp";
    int n =s.length();
    string p ="";
    for(int i=0; i<n; i++){
        if(s[i]==p[p.length()-1]){
            p.pop_back();
        } else {
            p.push_back(s[i]);
        }
    }
     cout<<p;

}