#include <iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main() {
    map<int,string>m;
    m[1] = "Anubhav Mishra";
    m[2] = "Ankit Sharma";
    m[3] = "Ankit Kumar";
    m[4] = "Anand Mishra";
    m[5] = "Anuj Pal";
    m.insert({6 ,"Ashutosh"});
//  map<int , string>:: iterator it;
    for(auto it = m.begin(); it!= m.end(); ++it){
        cout<< it->first<<" "<<it->second<<" "<<"\n";
    }
    
    //return 0;
}