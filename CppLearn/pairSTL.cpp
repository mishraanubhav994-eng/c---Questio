#include<iostream>
#include<utility>
using namespace std;

int main(){
//     pair<int, float> k(223, 23.44);
//     cout<<k.first;
//     cout<<endl;
//     cout<<k.second;
// }
auto p = make_pair(18,"Anubhav Mishra");
cout<<p.first<<"\n";
cout<<p.second<<" \n";
}