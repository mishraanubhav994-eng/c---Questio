#include <iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<climits>
using namespace std;


class Stack{
    int capacity;
    int * arr;
    int top;

    public:
    Stack(int c){
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    void push(int data){
        if(this->top == this->capacity-1){
            cout<<"overflow\n";
            return;

        }
        this->top++;
        this->arr[this->top] = data;
    }

    // pop function
    int pop(){
        if(this->top == -1){
            cout<<"underflow\n";
            return INT_MIN;
        }
    int poppedValue = this->arr[this->top];
    this->top--;
    return poppedValue;

    }
       int getTop(){
        if(this->top == -1){
            cout<<"underflow\n";
            return INT_MIN;

        }
       return  this->arr[this->top];
       }

       //checking for the Stack to be empty or not

       bool isEmpty(){
        return this->top == -1;

       }

       int size(){
        return this->top +1;
       }
    

};

int main() {
    Stack st(5);
    st.push(33);
    st.push(2);
    st.push(55);

    cout<<"Top element of the stack is:"<<st.getTop()<<endl;
    st.pop();
    cout<<"After the pop the top element is:"<<st.getTop()<<endl;
    return 0;
}