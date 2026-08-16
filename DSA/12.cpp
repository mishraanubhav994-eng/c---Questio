#include <iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number :\n";
    cin>>num;
    map<string, int>p={{"M",1000},{"CM",900},{"D",500},{"CD",400},{"C",100},{"XC",90},{"L",50},{"XL",40},{"X",10},{"IX",9},{"V",5},{"IV",4},{"I",1}};
     string ans ="";

   for(int i=0; i<p.size(); i++){
   while (num >= p[i].first) {
                ans += p[i].second;
                num -= p[i].first;
            }
  
}
}