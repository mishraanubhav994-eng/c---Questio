#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int>v={2,3,1,6,4,3,9};
    //vector<char>ch={'a','e','i','o', 'u', 'k','b'};
    // sort(ch.begin(), ch.end());
    // ch.resize(10);
    // for(auto it = ch.begin(); it!= ch.end(); ++it){
    //     cout<<*it<<"\n";
    // }
    v.erase(v.begin(), v.end()-2);
    for(auto it = v.begin(); it!= v.end(); ++it){
        cout<<*it<<" ";
    }

   //vector<int>::iterator it;
//    sort(v.begin(), v.end());
//    reverse(v.begin(), v.end());
//    cout<<" Max size it hold : "<<v.max_size()<<"\n";
// //    for(it= v.begin(); it != v.end(); it++){
// //       cout<<*it<<" ";
// //    }
// v.resize(4);
//    for(auto it = v.begin(); it!=v.end(); ++it){
//     cout<< *it<<" ";
//    }
    
    return 0;
}