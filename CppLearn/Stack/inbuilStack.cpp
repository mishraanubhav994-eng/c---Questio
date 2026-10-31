#include <iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int main() {

    stack<int>st;
    st.push(33);
    st.push(1);
    st.push(11);
    cout<<st.top()<<endl;
    st.push(13);
    st.push(14);
    cout<<st.top()<<endl;
    st.push(15);

    
    return 0;
}