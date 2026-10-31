#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

stack<int> copyStack(stack<int> &input){
    stack<int>temp;

     while(not input.empty()){
        // do this until the input stack become empty
        int curr = input.top();
        input.pop();
        temp.push(curr);

     }
     stack<int>result;
     while(not temp.empty()){
        // do this until the temp stack become empty
        int curr = temp.top();
        temp.pop();
        result.push(curr);
     }
     return result;
}

int main() {
    stack<int>st;
    st.push(33);
    st.push(2);
    st.push(55);

    stack<int>result =copyStack(st);

    // printing the result stack
    while(not result.empty()){
        int curr = result.top();
        result.pop();
        cout<<curr<<" ";
    }
    
    
    return 0;
}