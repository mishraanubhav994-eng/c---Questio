#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool checkPalindrome(string s, int i , int j ){
    while(j>=i){
        if(s[i] != s[j]) return false;
        else {
            i++;
            j--;
        }
        return true;
    }
}

int main() {
    string s;
    int i =0;
    int j =s.length()-1;
    cin>>s;
    checkPalindrome(s,i,j);
    //return 0;
}