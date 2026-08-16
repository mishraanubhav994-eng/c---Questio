#include<iostream>
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
void insertNodeAtHead(Node* &head,int data){
    //step1
    Node* newNode = new Node(data);
    // step 2
    newNode->next = head;
    // step 3
    head = newNode;
}
 void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
 }

int main(){

    Node* head = new Node(10);
        insertNodeAtHead(head,20);
        insertNodeAtHead(head,10);
        insertNodeAtHead(head,220);
        insertNodeAtHead(head,40);
        insertNodeAtHead(head,80);
        print(head);

}