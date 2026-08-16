#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;;
        this->prev = NULL;
        
    }
    
};

    void  insertAtHead(Node* &head,Node* tail, int data){
     Node* newNode = new Node(data);

      if(head == NULL){
        head = newNode;
        tail = newNode;
      }
      else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
      }
    
  }

       void insertAtTail(Node* &head, Node* &tail, int data){
            Node* newNode = new Node(data);
            if(tail ==NULL){
                tail = newNode;
                head = newNode;
            }
            else{
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
       }
       void printList(Node* head) {
            Node* temp = head;
            while (temp != NULL) {
                cout << temp->data<<" ";
                temp = temp->next;
            }
            //cout << "NULL" << endl;
}
        int main() {

            Node* head = NULL;
            Node* tail = NULL;
                insertAtTail(head, tail, 10);
                insertAtTail(head, tail, 20);
                insertAtHead(head, tail, 5);
                insertAtTail(head, tail, 30);
                printList(head);
                return 0;
        }