#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this->data = data;
        this->next = NULL;

    }

};

   Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = curr->next;

   }

  bool checkPalindrome(Node* &head){
        if(head == NULL){
            cout<<"LL is empty"<<endl;
            return true;
        }
        if(head->next == NULL){
            return true;
        } 
       // Step 1 finding the middle Node
        Node* slow = head;
        Node* fast = head->next;
            while(fast != NULL){
                fast = fast->next;
                if(fast != NULL){
                    fast = fast->next;
                    slow = slow->next;
                }
            }

            // Step 2: Reverse the LL from the Middle
            Node* reverseLLKaHead = reverse(slow->next);
            slow ->next = reverseLLKaHead;

            // Step 3: Start comaparing 
            Node * temp1 = head;
            Node* temp2 = reverseLLKaHead;
               while(temp2 != NULL){
                  if(temp1->data != temp2->data){
                    //It is not Palindrome
                    return false;
                  }
                  else{
                    temp1 = temp1->next;
                    temp2 = temp2->next;
                  }
               }
         return true;
    } 


        int main() {
            Node* head = new Node(10);
            Node* second = new Node(10);
            Node* third = new Node(10);
            Node* forth = new Node(10);
            Node* fifth = new Node(10);
            
            head->next = second;
            second->next = third;
            third->next = forth;
            forth->next= fifth;


    
    return 0;
}