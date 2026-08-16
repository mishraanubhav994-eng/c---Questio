#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(8);
    s.push(3);
    s.push(2);
    s.push(90);
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.size();
}