#include <iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;

int main() {
    deque<int>dq;
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(1);
    dq.push_back(5);
    dq.push_back(8);

    while(not dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    
    return 0;
}
