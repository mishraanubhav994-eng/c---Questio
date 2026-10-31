#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;

    }
};

class Stack{
    Node* head;
    int capacity;
    int currentSize;
    public:
    Stack(int c){
        this->capacity = c;
        this->currentSize =0;
        head = NULL;
        
    }
      void push(int data){

        if(this->currentSize == this->capacity){
            cout<<"overflow\n";
            return;
        }
        Node* temp = new Node(data);
        temp->next = this->head;
        this->head = temp;
        this->currentSize++;
      }

      int pop(){
        if(this->head == NULL){
            cout<<"overflow\n";
            return INT_MIN;
        }
        Node* temp = this->head->next;
        this->head->next == NULL;
        delete this->head;
        this->head = temp;
      }
         int size(){
        return this->currentSize;
    }

    int getTop(){
        if(this->head == NULL){
            cout<<"overflow\n";
            return INT_MIN;
        }
        return this->head->data;
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