#include <iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }


};

class Queue{
     Node* head;
     Node* tail;
     int size;
     public:

     Queue(){
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
     }

     void enqueue(int data){
         Node* newNode = new Node(data);
         if(this->head == NULL){
            // LL is empty 
            this->head = this->tail = newNode;
         }
         else{
            this->tail->next = newNode;
            this->tail = newNode;
         }
         this->size++;
     }

     void dequeue(){
        if(this->head == NULL){
            //LL is empty
            return;
        }
        else{
            Node* oldHead = this->head;
            Node* newNode = this->head->next;
            if(this->head == NULL){
                this->tail = NULL;
            }
            this->head = newNode;
            delete oldHead;
            this->size--;
        }
     }
     int getSize(){
          return this->size;
     }
     int front(){
        if(this->head == NULL ){
            return -1;
        }
        else{
            return this->head->data;
        }
     }
     bool isEmpty() {
    return this->head == NULL;
}

};

int main() {

    Queue qu;
    qu.enqueue(33);
    qu.enqueue(32);
    qu.enqueue(31);
    qu.enqueue(30);
    qu.dequeue();
    qu.enqueue(55);
    qu.dequeue();
    qu.enqueue(3);

    while(not qu.isEmpty()){
   cout<<qu.front()<<" ";
     qu.dequeue();
    }
    
    return 0;
}