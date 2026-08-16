#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    string s = "Anubhav";
    string t = "Anukbhav";
    char ans =' ';
    for(int i=0; i<s.length(); i++){
        ans += s[i]^t[i];
    }
    cout<<" the answer is :"<<ans;

}